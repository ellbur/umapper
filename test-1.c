
#include "keys.h"
#include "mapping.h"

static const struct mapping our_mappings[] = {
  { .from_modifiers = 0x0, .to_modifiers = 0x0, .to_action = A },
  { .from_modifiers = 0x1, .to_modifiers = 0x1, .to_action = A },
};

static const struct key_definition our_key_definitions[] = {
  { .style = action_key_style, .action_key = { .num_mappings = 2, .mappings = our_mappings + 0 } },
  { .style = modifier_key_style, .modifier_key = { .modifier_mask = MOD1_MASK, .output_modifier_mask = LEFT_SHIFT_MASK } },
};

static const struct layout our_layout = {
  .num_keys = 2,
  .key_definitions = our_key_definitions
};

int main() {
  struct state our_state = { };
}

