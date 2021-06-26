
#include "../keys.h"
#include "../mapping.h"
#include "../debugging.h"
#include <stdio.h>

static const struct mapping our_mappings[] = {
  // A 0
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = 0x0, .to_action = KC_B },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0x0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_B },
  // B 2
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = 0x0, .to_action = KC_C },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0x0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_C },
  // C 4
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = 0x0, .to_action = KC_A },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = MOD1_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_A },
  // D 6
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = LEFT_CTRL_MASK, .to_action = KC_A },
};

static const struct key_definition our_key_definitions[] = {
  [KC_A] = { action_key_style, .action_key = { .mappings_start = 0, .mappings_end = 2 } },
  [KC_B] = { action_key_style, .action_key = { .mappings_start = 2, .mappings_end = 4 } },
  [KC_C] = { action_key_style, .action_key = { .mappings_start = 4, .mappings_end = 6 } },
  [KC_D] = { action_key_style, .action_key = { .mappings_start = 6, .mappings_end = 7 } },
  [KC_LSHIFT] = { modifier_key_style, .modifier_key = { MOD1_MASK, LEFT_SHIFT_MASK } },
};

static const struct layout our_layout = {
  .mappings = our_mappings,
  .key_definitions = our_key_definitions,
  .num_keys = (sizeof our_key_definitions) / (sizeof our_key_definitions[0]),
};

#define MAX_EVENTS_PER_LIST 8

struct event_list {
  uint8_t size;
  struct event events[MAX_EVENTS_PER_LIST];
};

static void push_cb(void *data, enum event_type t, key_code k) {
  struct event_list *list = (struct event_list *) data;
  if (list->size < MAX_EVENTS_PER_LIST) {
    list->events[list->size].t = t;
    list->events[list->size].k = k;
    list->size += 1;
  }
}

static void test(struct state *state, enum event_type t, key_code k) {
  printf("\n");
  printf("%s %s\n", event_type_names[t], key_names[k]);
  struct event_list list = { };
  step(&our_layout, state, t, k, push_cb, &list);
  for (uint8_t i=0; i<list.size; i++) {
    printf(" < %s %s\n", event_type_names[list.events[i].t], key_names[list.events[i].k]);
  }
}

int main() {
  struct state state = { };
  
  test(&state, PRESSED, KC_A);
  test(&state, PRESSED, KC_LSHIFT);
  test(&state, PRESSED, KC_B);
  test(&state, RELEASED, KC_LSHIFT);
  test(&state, RELEASED, KC_B);
  test(&state, RELEASED, KC_A);
  test(&state, PRESSED, KC_D);
  test(&state, PRESSED, KC_C);
  test(&state, RELEASED, KC_C);
  test(&state, PRESSED, KC_LSHIFT);
  test(&state, PRESSED, KC_C);
  test(&state, PRESSED, KC_B);
  test(&state, RELEASED, KC_C);
  test(&state, RELEASED, KC_B);
  test(&state, RELEASED, KC_LSHIFT);
  test(&state, PRESSED, KC_LSHIFT);
  test(&state, PRESSED, KC_C);
  test(&state, RELEASED, KC_C);
  test(&state, PRESSED, KC_C);
  test(&state, RELEASED, KC_C);
}

