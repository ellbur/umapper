
#include "../keys.h"
#include "../mapping.h"
#include "../debugging.h"
#include <stdio.h>
#include <stdlib.h>

static const struct mapping our_mappings[] = {
  // A 0
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0x0, .to_modifiers = 0x0, .to_action = KC_D },
  { .from_modifiers = 0x0, .from_absorbing_modifiers = 0x0, .to_modifiers = 0x0, .to_action = KC_C },
};

static const struct key_definition our_key_definitions[] = {
  [KC_A] = { action_key_style, .action_key = { .mappings_start = 0, .mappings_end = 2 } },
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

static void test(struct state *state, enum event_type t, key_code k, int num_should, struct event should[num_should]) {
  printf("\n");
  printf("%s %s\n", event_type_names[t], key_names[k]);
  struct event_list list = { };
  step(&our_layout, state, t, k, push_cb, &list);
  for (uint8_t i=0; i<list.size; i++) {
    printf(" < %s %s\n", event_type_names[list.events[i].t], key_names[list.events[i].k]);
  }
  
  if (list.size != num_should) {
    fprintf(stderr, "Got %d events, expected %d\n", list.size, num_should);
    exit(1);
  }
  for (uint8_t i=0; i<list.size; i++) {
    if (list.events[i].t != should[i].t || list.events[i].k != should[i].k) {
      fprintf(stderr, "At %d, got %s %s, expected %s %s\n",
          (int) i,
          event_type_names[list.events[i].t],
          key_names[list.events[i].k],
          event_type_names[should[i].t],
          key_names[should[i].k]
      );
      exit(1);
    }
  }
}

int main() {
  struct state state = { };
  
  test(&state, PRESSED, KC_LSHIFT, 1, (struct event[]) { { PRESSED, KC_LSHIFT } });
  test(&state, PRESSED, KC_A, 2, (struct event[]) { { RELEASED, KC_LSHIFT }, { PRESSED, KC_D } });
}

