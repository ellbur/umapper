
#pragma once

#include <inttypes.h>
#include <stdbool.h>

typedef uint8_t key_code;
const key_code A = 1;
const key_code B = 2;
const key_code LEFTSHIFT = 3;
const key_code RIGHTSHIFT = 4;
const key_code LEFTCTRL = 5;
const key_code RIGHTCTRL = 6;
const key_code LEFTALT = 7;
const key_code RIGHTALT = 8;
const key_code LEFTMETA = 9;
const key_code RIGHTMETA = 10;

#define MAX_KEYS 200
#define MAX_MODIFIERS 8

typedef uint8_t modifier_set;

#define LEFT_SHIFT_MASK 0x01
#define RIGHT_SHIFT_MASK 0x02
#define LEFT_CTRL_MASK 0x04
#define RIGHT_CTRL_MASK 0x08
#define LEFT_ALT_MASK 0x10
#define RIGHT_ALT_MASK 0x20
#define LEFT_META_MASK 0x40
#define RIGHT_META_MASK 0x80

#define MOD1_MASK 0x01
#define MOD2_MASK 0x02
#define MOD3_MASK 0x04
#define MOD4_MASK 0x08
#define MOD5_MASK 0x10
#define MOD6_MASK 0x20
#define MOD7_MASK 0x40
#define MOD8_MASK 0x80

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
  modifier_set modifier_mask;
  modifier_set output_modifier_mask;
};

struct transparent_modifier_key {
  modifier_set modifier_mask;
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

