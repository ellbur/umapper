
#include <inttypes.h>
#include <stdbool.h>

typedef uint8_t key_code;
const key_code A = 1;
const key_code B = 2;
const key_code SHIFT = 3;

#define MAX_KEYS 200
#define MAX_MODIFIERS 16

typedef uint8_t modifier_set;

struct mapping {
  modifier_set from_modifiers;
  modifier_set to_modifiers;
  key_code to_action;
};

enum key_style {
  action_key_style,
  modifier_key_style,
  transparent_modifier_key_style
};

struct action_key {
  int num_mappings;
  struct mapping const *mappings;
};

struct modifier_key {
  uint8_t modifier_number;
  key_code to_modifier;
};

struct transparent_modifier_key {
  uint8_t modifier_number;
};

struct key_definition {
  enum key_style style;
  union {
    struct action_key action_key;
    struct modifier_key modifier_key;
    struct transparent_modifier_key transparent_modifier_key;
  };
};

struct layout {
  int num_keys;
  struct key_definition const *key_definitions;
};

const struct mapping our_mappings[] = {
  { .from_modifiers = 0x0, .to_modifiers = 0x0, .to_action = A },
  { .from_modifiers = 0x1, .to_modifiers = 0x1, .to_action = A },
};

const struct key_definition our_key_definitions[] = {
  { .style = action_key_style, .action_key = { .num_mappings = 2, .mappings = our_mappings + 0 } },
  { .style = modifier_key_style, .modifier_key = { .modifier_number = 0, .to_modifier = SHIFT } },
};

const struct layout our_layout = {
  .num_keys = 2,
  .key_definitions = our_key_definitions
};

struct pressed_modifier {
  key_code input_key;
  uint8_t modifier_number;
};

struct pressed_output_modifier {
  key_code input_key;
  key_code output_modifier;
};

struct pressed_action_key {
  key_code trigger;
  modifier_set to_modifiers;
  key_code to_action;
};

struct state {
  bool input_pressed_keys[MAX_KEYS];
  
  uint8_t pressed_modifier_mask;
  uint8_t num_pressed_modifiers;
  struct pressed_modifier pressed_modifiers[MAX_MODIFIERS];
  
  uint8_t num_pressed_output_modifiers;
  struct pressed_output_modifier pressed_output_modifiers[MAX_MODIFIERS];
  
  bool has_pressed_action_key;
  struct pressed_action_key pressed_action_key;
};

struct state our_state = { };

void add_action_mapping(struct state *state, key_code k, struct mapping const *mapping) {
}

void newly_press(struct layout const *layout, struct state *state, key_code k) {
  if (k >= layout->num_keys) {
    return;
  }
  
  if (layout->key_definitions[k].style == action_key_style) {
    struct action_key const *action_key = &layout->key_definitions[k].action_key;
    for (uint8_t i=0; i<action_key->num_mappings; i++) {
      if (!(~action_key->mappings[i].from_modifiers & state->pressed_modifier_mask)) {
        add_action_mapping(state, k, &action_key->mappings[i]);
        break;
      }
    }
  }
  else if (layout->key_definitions[k].style == modifier_key_style) {
    
  }
  else if (layout->key_definitions[k].style == transparent_modifier_key_style) {
    
  }
}

void do_press(struct layout const *layout, struct state *state, key_code k) {
  if (!state->input_pressed_keys[k]) {
    state->input_pressed_keys[k] = true;
    newly_press(layout, state, k);
  }
}

void newly_release(struct layout const *layout, struct state *state, key_code k) {
}

void do_release(struct layout const *layout, struct state *state, key_code k) {
  if (state->input_pressed_keys[k]) {
    state->input_pressed_keys[k] = false;
    newly_release(layout, state, k);
  }
}

