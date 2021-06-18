
#pragma once

#include <inttypes.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_KEYS 12

typedef enum {
  A = 0,
  B,
  C,
  D,
  LEFTSHIFT,
  RIGHTSHIFT,
  LEFTCTRL,
  RIGHTCTRL,
  LEFTALT,
  RIGHTALT,
  LEFTMETA,
  RIGHTMETA,
} key_code;

#ifdef __cplusplus
}
#endif

