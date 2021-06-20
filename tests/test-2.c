
#include "../keys.h"
#include "../mapping.h"
#include "../debugging.h"
#include <stdio.h>

#include "./test-2-layout.c"

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
  
  printf("== Pressing S ==\n");
  test(&state, PRESSED, KC_S);
  test(&state, RELEASED, KC_S);
  printf("\n\n");
  
  printf("== Pressing Shift + S ==\n");
  test(&state, PRESSED, KC_LSHIFT);
  test(&state, PRESSED, KC_S);
  test(&state, RELEASED, KC_S);
  test(&state, RELEASED, KC_LSHIFT);
  printf("\n\n");
  
  printf("== Pressing Caps + L ==\n");
  test(&state, PRESSED, KC_CAPSLOCK);
  test(&state, PRESSED, KC_L);
  test(&state, RELEASED, KC_L);
  test(&state, RELEASED, KC_CAPSLOCK);
  printf("\n\n");
  
  printf("== Pressing Shift + Tab + L ==\n");
  test(&state, PRESSED, KC_RSHIFT);
  test(&state, PRESSED, KC_TAB);
  test(&state, PRESSED, KC_L);
  test(&state, RELEASED, KC_L);
  test(&state, RELEASED, KC_RSHIFT);
  test(&state, PRESSED, KC_TAB);
  printf("\n\n");
}

