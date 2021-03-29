
#pragma once

#include "keys.h"

struct pressed_modifier {
  key_code input_key;
  modifier_set modifier_mask;
};

struct pressed_output_modifier {
  key_code input_key;
  modifier_set output_modifier_mask;
};

struct pressed_action_key {
  key_code trigger;
  modifier_set to_modifiers;
  key_code to_action;
  modifier_set from_absorbing_modifiers;
};

struct state {
  bool input_pressed_keys[MAX_KEYS];
  
  modifier_set pressed_modifier_mask;
  uint8_t num_pressed_modifiers;
  struct pressed_modifier pressed_modifiers[MAX_MODIFIERS];
  
  modifier_set output_modifier_mask;
  uint8_t num_pressed_output_modifiers;
  struct pressed_output_modifier pressed_output_modifiers[MAX_MODIFIERS];
  
  bool has_pressed_action_key;
  struct pressed_action_key pressed_action_key;
};

typedef void event_callback_t(void *data, enum event_type, key_code);

void step(struct layout const *layout, struct state *state, enum event_type t, key_code k, event_callback_t *cb, void *data);

