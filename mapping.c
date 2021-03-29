
#include "mapping.h"
#include "keys.h"

static void release_modifiers(modifier_set mask, event_callback_t *cb, void *data) {
  if (mask & LEFT_SHIFT_MASK) cb(data, RELEASED, LEFTSHIFT);
  if (mask & RIGHT_SHIFT_MASK) cb(data, RELEASED, RIGHTSHIFT);
  if (mask & LEFT_CTRL_MASK) cb(data, RELEASED, LEFTCTRL);
  if (mask & RIGHT_CTRL_MASK) cb(data, RELEASED, RIGHTCTRL);
  if (mask & LEFT_ALT_MASK) cb(data, RELEASED, LEFTALT);
  if (mask & RIGHT_ALT_MASK) cb(data, RELEASED, RIGHTALT);
  if (mask & LEFT_META_MASK) cb(data, RELEASED, LEFTMETA);
  if (mask & RIGHT_META_MASK) cb(data, RELEASED, RIGHTMETA);
}

static void press_modifiers(modifier_set mask, event_callback_t *cb, void *data) {
  if (mask & LEFT_SHIFT_MASK) cb(data, PRESSED, LEFTSHIFT);
  if (mask & RIGHT_SHIFT_MASK) cb(data, PRESSED, RIGHTSHIFT);
  if (mask & LEFT_CTRL_MASK) cb(data, PRESSED, LEFTCTRL);
  if (mask & RIGHT_CTRL_MASK) cb(data, PRESSED, RIGHTCTRL);
  if (mask & LEFT_ALT_MASK) cb(data, PRESSED, LEFTALT);
  if (mask & RIGHT_ALT_MASK) cb(data, PRESSED, RIGHTALT);
  if (mask & LEFT_META_MASK) cb(data, PRESSED, LEFTMETA);
  if (mask & RIGHT_META_MASK) cb(data, PRESSED, RIGHTMETA);
}

static void release_action_keys(struct state *state, event_callback_t *cb, void *data) {
  if (state->has_pressed_action_key) {
    cb(data, RELEASED, state->pressed_action_key.to_action);
    release_modifiers(state->pressed_action_key.to_modifiers & ~state->output_modifier_mask, cb, data);
    state->pressed_modifier_mask &= ~state->pressed_action_key.from_absorbing_modifiers;
    state->has_pressed_action_key = false;
  }
}

static void add_action_mapping(struct state *state, key_code k, struct mapping const *mapping, event_callback_t *cb, void *data) {
  if (!(mapping->to_modifiers & LEFT_SHIFT_MASK) && (state->output_modifier_mask & LEFT_SHIFT_MASK)) {
    state->output_modifier_mask &= ~LEFT_SHIFT_MASK;
    cb(data, RELEASED, LEFTSHIFT);
  }
  
  if (!(mapping->to_modifiers & RIGHT_SHIFT_MASK) && (state->output_modifier_mask & RIGHT_SHIFT_MASK)) {
    state->output_modifier_mask &= ~RIGHT_SHIFT_MASK;
    cb(data, RELEASED, RIGHTSHIFT);
  }
  
  press_modifiers(mapping->to_modifiers & ~state->output_modifier_mask, cb, data);
  cb(data, PRESSED, mapping->to_action);
  
  state->has_pressed_action_key = true;
  state->pressed_action_key.to_action = mapping->to_action;
  state->pressed_action_key.to_modifiers = mapping->to_modifiers;
  state->pressed_action_key.trigger = k;
  state->pressed_action_key.from_absorbing_modifiers = mapping->from_absorbing_modifiers;
}

static void add_modifier(struct state *state, key_code k, struct modifier_key const *modifier_key, event_callback_t *cb, void *data) {
  if (state->num_pressed_modifiers < MAX_MODIFIERS) {
    int i = state->num_pressed_modifiers;
    
    state->pressed_modifiers[i].input_key = k;
    state->pressed_modifiers[i].modifier_mask = modifier_key->modifier_mask;
    state->pressed_modifier_mask |= modifier_key->modifier_mask;
      
    state->num_pressed_modifiers += 1;
  }
  
  if (state->num_pressed_output_modifiers < MAX_MODIFIERS) {
    int i = state->num_pressed_output_modifiers;
    
    state->pressed_output_modifiers[i].input_key = k;
    state->pressed_output_modifiers[i].output_modifier_mask = modifier_key->output_modifier_mask;
    press_modifiers(modifier_key->output_modifier_mask & ~state->output_modifier_mask, cb, data);
    state->output_modifier_mask |= modifier_key->output_modifier_mask;
    
    state->num_pressed_output_modifiers += 1;
  }
}

static void add_transparent_modifier(struct state *state, key_code k, struct transparent_modifier_key const *transparent_modifier_key, event_callback_t *cb, void *data) {
  if (state->num_pressed_modifiers < MAX_MODIFIERS) {
    int i = state->num_pressed_modifiers;
    
    state->pressed_modifiers[i].input_key = k;
    state->pressed_modifiers[i].modifier_mask = transparent_modifier_key->modifier_mask;
    state->pressed_modifier_mask |= transparent_modifier_key->modifier_mask;
      
    state->num_pressed_modifiers += 1;
  }
}

static void newly_press(struct layout const *layout, struct state *state, key_code k, event_callback_t *cb, void *data) {
  if (k >= layout->num_keys) {
    return;
  }
  
  release_action_keys(state, cb, data);
  
  if (layout->key_definitions[k].style == action_key_style) {
    struct action_key const *action_key = &layout->key_definitions[k].action_key;
    for (uint8_t i=0; i<action_key->num_mappings; i++) {
      if (!(~action_key->mappings[i].from_modifiers & state->pressed_modifier_mask)) {
        add_action_mapping(state, k, &action_key->mappings[i], cb, data);
        break;
      }
    }
  }
  else if (layout->key_definitions[k].style == modifier_key_style) {
    add_modifier(state, k, &layout->key_definitions[k].modifier_key, cb, data);
  }
  else if (layout->key_definitions[k].style == transparent_modifier_key_style) {
    add_transparent_modifier(state, k, &layout->key_definitions[k].transparent_modifier_key, cb, data);
  }
}

static void do_press(struct layout const *layout, struct state *state, key_code k, event_callback_t *cb, void *data) {
  if (!state->input_pressed_keys[k]) {
    state->input_pressed_keys[k] = true;
    newly_press(layout, state, k, cb, data);
  }
}

static void remove_action_mapping(struct state *state, key_code k, struct action_key const *action_key, event_callback_t *cb, void *data) {
  if (state->has_pressed_action_key) {
    if (state->pressed_action_key.trigger == k) {
      release_action_keys(state, cb, data);
    }
  }
}

static void remove_modifier(struct state *state, key_code k, struct modifier_key const *modifier_key, event_callback_t *cb, void *data) {
  for (uint8_t i=0; i<state->num_pressed_modifiers; i++) {
    if (state->pressed_modifiers[i].input_key == k) {
      for (uint8_t j=i+1; j<state->num_pressed_modifiers; j++) {
        state->pressed_modifiers[j-1].input_key = state->pressed_modifiers[j].input_key;
        state->pressed_modifiers[j-1].modifier_mask = state->pressed_modifiers[j].modifier_mask;
      }
      
      state->num_pressed_modifiers -= 1;
      
      modifier_set new_mask = 0;
      for (uint8_t j=0; j<state->num_pressed_modifiers; j++) {
        new_mask |= state->pressed_modifiers[j].modifier_mask;
      }
      
      state->pressed_modifier_mask = new_mask;
      
      break;
    }
  }
  
  for (uint8_t i=0; i<state->num_pressed_output_modifiers; i++) {
    if (state->pressed_output_modifiers[i].input_key == k) {
      for (uint8_t j=i+1; j<state->num_pressed_output_modifiers; j++) {
        state->pressed_output_modifiers[j-1].input_key = state->pressed_output_modifiers[j].input_key;
        state->pressed_output_modifiers[j-1].output_modifier_mask = state->pressed_output_modifiers[j].output_modifier_mask;
      }
      
      state->num_pressed_output_modifiers -= 1;
      
      modifier_set old_mask = state->output_modifier_mask;
      modifier_set new_mask = 0;
      for (uint8_t j=0; j<state->num_pressed_output_modifiers; j++) {
        new_mask |= state->pressed_output_modifiers[j].output_modifier_mask;
      }
      
      state->output_modifier_mask = new_mask;
      
      modifier_set base_mask = new_mask;
      if (state->has_pressed_action_key) {
        base_mask |= state->pressed_action_key.to_modifiers;
      }
      
      release_modifiers(old_mask & ~new_mask, cb, data);
      
      break;
    }
  }
}

static void remove_transparent_modifier(struct state *state, key_code k, struct transparent_modifier_key const *transparent_modifier_key, event_callback_t *cb, void *data) {
  for (uint8_t i=0; i<state->num_pressed_modifiers; i++) {
    if (state->pressed_modifiers[i].input_key == k) {
      for (uint8_t j=i+1; j<state->num_pressed_modifiers; j++) {
        state->pressed_modifiers[j-1].input_key = state->pressed_modifiers[j].input_key;
        state->pressed_modifiers[j-1].modifier_mask = state->pressed_modifiers[j].modifier_mask;
      }
      
      state->num_pressed_modifiers -= 1;
      
      modifier_set new_mask = 0;
      for (uint8_t j=0; j<state->num_pressed_modifiers; j++) {
        new_mask |= state->pressed_modifiers[j].modifier_mask;
      }
      
      state->pressed_modifier_mask = new_mask;
      
      break;
    }
  }
}

static void newly_release(struct layout const *layout, struct state *state, key_code k, event_callback_t *cb, void *data) {
  if (k >= layout->num_keys) {
    return;
  }
  
  if (layout->key_definitions[k].style == action_key_style) {
    struct action_key const *action_key = &layout->key_definitions[k].action_key;
    remove_action_mapping(state, k, action_key, cb, data);
  }
  else if (layout->key_definitions[k].style == modifier_key_style) {
    remove_modifier(state, k, &layout->key_definitions[k].modifier_key, cb, data);
  }
  else if (layout->key_definitions[k].style == transparent_modifier_key_style) {
    remove_transparent_modifier(state, k, &layout->key_definitions[k].transparent_modifier_key, cb, data);
  }
}

static void do_release(struct layout const *layout, struct state *state, key_code k, event_callback_t *cb, void *data) {
  if (state->input_pressed_keys[k]) {
    state->input_pressed_keys[k] = false;
    newly_release(layout, state, k, cb, data);
  }
}

void step(struct layout const *layout, struct state *state, enum event_type t, key_code k, event_callback_t *cb, void *data) {
  if (t == PRESSED) {
    do_press(layout, state, k, cb, data);
  }
  else {
    do_release(layout, state, k, cb, data);
  }
}

