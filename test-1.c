
#include "keys.h"
#include "mapping.h"
#include "debugging.h"
#include <stdio.h>

static const struct mapping our_mappings[] = {
  // A
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = 0x0, .to_action = B },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0x0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = B },
  
  // B
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = 0x0, .to_action = C },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0x0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = C },
  
  // C
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = 0x0, .to_action = A },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = MOD1_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = A },
  
  // D
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = LEFT_CTRL_MASK, .to_action = A },
};

static const struct key_definition our_key_definitions[] = {
  /* A */ { action_key_style, .action_key = { .num_mappings = 2, .mappings = our_mappings + 0 } },
  /* B */ { action_key_style, .action_key = { .num_mappings = 2, .mappings = our_mappings + 2 } },
  /* C */ { action_key_style, .action_key = { .num_mappings = 2, .mappings = our_mappings + 4 } },
  /* D */ { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings + 6 } },
  /* LEFTSHIFT */ { modifier_key_style, .modifier_key = { MOD1_MASK, LEFT_SHIFT_MASK } },
};

static const struct layout our_layout = {
  .num_keys = 5,
  .key_definitions = our_key_definitions
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
  
  test(&state, PRESSED, A);
  test(&state, PRESSED, LEFTSHIFT);
  test(&state, PRESSED, B);
  test(&state, RELEASED, LEFTSHIFT);
  test(&state, RELEASED, B);
  test(&state, RELEASED, A);
  test(&state, PRESSED, D);
  test(&state, PRESSED, C);
  test(&state, RELEASED, C);
  test(&state, PRESSED, LEFTSHIFT);
  test(&state, PRESSED, C);
  test(&state, PRESSED, B);
  test(&state, RELEASED, C);
  test(&state, RELEASED, B);
  test(&state, RELEASED, LEFTSHIFT);
  test(&state, PRESSED, LEFTSHIFT);
  test(&state, PRESSED, C);
  test(&state, RELEASED, C);
  test(&state, PRESSED, C);
  test(&state, RELEASED, C);
}

