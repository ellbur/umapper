
#include "../keys.h"
#include "../mapping.h"
#include "../debugging.h"
#include <stdio.h>
#include <stdlib.h>
#include "super-dvorak.c"

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
  test(&state, PRESSED, KC_A, 1, (struct event[]) { { PRESSED, KC_A } });
  test(&state, RELEASED, KC_A, 1, (struct event[]) { { RELEASED, KC_A } });
  test(&state, PRESSED, KC_S, 2, (struct event[]) { { RELEASED, KC_LSHIFT }, { PRESSED, KC_O } });
  test(&state, RELEASED, KC_S, 1, (struct event[]) { { RELEASED, KC_O } });
  test(&state, RELEASED, KC_LSHIFT, 0, (struct event[]) { });
}

