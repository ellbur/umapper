static const __flash struct mapping our_mappings[] = {
  // KC_1  0  1
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_1 },
  // KC_2  1  2
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_7 },
  // KC_3  2  3
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_5 },
  // KC_4  3  4
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_3 },
  // KC_5  4  5
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_1 },
  // KC_6  5  6
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_9 },
  // KC_7  6  7
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_0 },
  // KC_8  7  8
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_2 },
  // KC_9  8  9
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_4 },
  // KC_0  9  10
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_6 },
  // KC_MINUS  10  11
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_8 },
  // KC_EQUAL  11  12
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_GRAVE },
  // KC_Q  12  16
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = MOD1_MASK, .to_modifiers = 0, .to_action = KC_ESCAPE },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_SCOLON },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_SCOLON },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SCOLON },
  // KC_W  16  20
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_COMMA },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_COMMA },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_LBRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_COMMA },
  // KC_E  20  24
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_DOT },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_DOT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_RBRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_DOT },
  // KC_R  24  26
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_5 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_P },
  // KC_T  26  27
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Y },
  // KC_Y  27  29
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_BSLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_F },
  // KC_U  29  36
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_PGUP },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_PGUP },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_G },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_G },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_PGUP },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_8 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_G },
  // KC_I  36  43
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_UP },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_UP },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_C },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_C },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_UP },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_RBRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_C },
  // KC_O  43  47
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_R },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_R },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_LBRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_R },
  // KC_P  47  51
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_L },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_L },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_BSLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_L },
  // KC_LBRACKET  51  54
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_SLASH },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_SLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_GRAVE },
  // KC_RBRACKET  54  57
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_6 },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_6 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_2 },
  // KC_A  57  60
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_A },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_A },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_A },
  // KC_S  60  63
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_O },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_O },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_O },
  // KC_D  63  66
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_E },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_E },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_E },
  // KC_F  66  70
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_U },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_U },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_EQUAL },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_U },
  // KC_G  70  73
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_I },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_I },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_I },
  // KC_H  73  80
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_HOME },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_HOME },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_D },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_D },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_HOME },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_7 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_D },
  // KC_J  80  89
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD5_MASK|MOD6_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK|LEFT_META_MASK, .to_action = KC_H },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_LEFT },
  { .from_modifiers = MOD5_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_0 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_H },
  // KC_K  89  96
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_DOWN },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_DOWN },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_T },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_T },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_DOWN },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_9 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_T },
  // KC_L  96  105
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD5_MASK|MOD6_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK|LEFT_META_MASK, .to_action = KC_N },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_RIGHT },
  { .from_modifiers = MOD5_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_N },
  // KC_SCOLON  105  112
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_END },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_END },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_S },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_S },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_END },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_MINUS },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_S },
  // KC_QUOTE  112  116
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_2 },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_2 },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_4 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_MINUS },
  // KC_BSLASH  116  117
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_TAB },
  // KC_Z  117  120
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_QUOTE },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_QUOTE },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_QUOTE },
  // KC_X  120  123
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_Q },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_Q },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Q },
  // KC_C  123  126
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_J },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_J },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_J },
  // KC_V  126  129
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_K },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_K },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_K },
  // KC_B  129  132
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_X },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_X },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_X },
  // KC_N  132  139
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_B },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_B },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_1 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_B },
  // KC_M  139  146
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_PGDOWN },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_PGDOWN },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_M },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_M },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_PGDOWN },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_EQUAL },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_M },
  // KC_COMMA  146  153
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_W },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_W },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_3 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_W },
  // KC_DOT  153  156
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_V },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_V },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_V },
  // KC_SLASH  156  159
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_Z },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_Z },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Z },
  // KC_SPACE  159  160
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SPACE },
};


static const __flash struct key_definition our_key_definitions[] = {
  [KC_TAB] = { modifier_key_style, .modifier_key = { MOD4_MASK, 0 } },
  [KC_GRAVE] = { modifier_key_style, .modifier_key = { MOD6_MASK, LEFT_META_MASK } },
  [KC_LSHIFT] = { modifier_key_style, .modifier_key = { MOD2_MASK, LEFT_SHIFT_MASK } },
  [KC_RSHIFT] = { modifier_key_style, .modifier_key = { MOD3_MASK, RIGHT_SHIFT_MASK } },
  [KC_LALT] = { modifier_key_style, .modifier_key = { MOD5_MASK, LEFT_ALT_MASK } },
  [KC_CAPSLOCK] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },
  [KC_RALT] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },
  [KC_LGUI] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },

  [KC_1] = { action_key_style, .action_key = { .mappings_start = 0, .mappings_end = 1 } },
  [KC_2] = { action_key_style, .action_key = { .mappings_start = 1, .mappings_end = 2 } },
  [KC_3] = { action_key_style, .action_key = { .mappings_start = 2, .mappings_end = 3 } },
  [KC_4] = { action_key_style, .action_key = { .mappings_start = 3, .mappings_end = 4 } },
  [KC_5] = { action_key_style, .action_key = { .mappings_start = 4, .mappings_end = 5 } },
  [KC_6] = { action_key_style, .action_key = { .mappings_start = 5, .mappings_end = 6 } },
  [KC_7] = { action_key_style, .action_key = { .mappings_start = 6, .mappings_end = 7 } },
  [KC_8] = { action_key_style, .action_key = { .mappings_start = 7, .mappings_end = 8 } },
  [KC_9] = { action_key_style, .action_key = { .mappings_start = 8, .mappings_end = 9 } },
  [KC_0] = { action_key_style, .action_key = { .mappings_start = 9, .mappings_end = 10 } },
  [KC_MINUS] = { action_key_style, .action_key = { .mappings_start = 10, .mappings_end = 11 } },
  [KC_EQUAL] = { action_key_style, .action_key = { .mappings_start = 11, .mappings_end = 12 } },
  [KC_Q] = { action_key_style, .action_key = { .mappings_start = 12, .mappings_end = 16 } },
  [KC_W] = { action_key_style, .action_key = { .mappings_start = 16, .mappings_end = 20 } },
  [KC_E] = { action_key_style, .action_key = { .mappings_start = 20, .mappings_end = 24 } },
  [KC_R] = { action_key_style, .action_key = { .mappings_start = 24, .mappings_end = 26 } },
  [KC_T] = { action_key_style, .action_key = { .mappings_start = 26, .mappings_end = 27 } },
  [KC_Y] = { action_key_style, .action_key = { .mappings_start = 27, .mappings_end = 29 } },
  [KC_U] = { action_key_style, .action_key = { .mappings_start = 29, .mappings_end = 36 } },
  [KC_I] = { action_key_style, .action_key = { .mappings_start = 36, .mappings_end = 43 } },
  [KC_O] = { action_key_style, .action_key = { .mappings_start = 43, .mappings_end = 47 } },
  [KC_P] = { action_key_style, .action_key = { .mappings_start = 47, .mappings_end = 51 } },
  [KC_LBRACKET] = { action_key_style, .action_key = { .mappings_start = 51, .mappings_end = 54 } },
  [KC_RBRACKET] = { action_key_style, .action_key = { .mappings_start = 54, .mappings_end = 57 } },
  [KC_A] = { action_key_style, .action_key = { .mappings_start = 57, .mappings_end = 60 } },
  [KC_S] = { action_key_style, .action_key = { .mappings_start = 60, .mappings_end = 63 } },
  [KC_D] = { action_key_style, .action_key = { .mappings_start = 63, .mappings_end = 66 } },
  [KC_F] = { action_key_style, .action_key = { .mappings_start = 66, .mappings_end = 70 } },
  [KC_G] = { action_key_style, .action_key = { .mappings_start = 70, .mappings_end = 73 } },
  [KC_H] = { action_key_style, .action_key = { .mappings_start = 73, .mappings_end = 80 } },
  [KC_J] = { action_key_style, .action_key = { .mappings_start = 80, .mappings_end = 89 } },
  [KC_K] = { action_key_style, .action_key = { .mappings_start = 89, .mappings_end = 96 } },
  [KC_L] = { action_key_style, .action_key = { .mappings_start = 96, .mappings_end = 105 } },
  [KC_SCOLON] = { action_key_style, .action_key = { .mappings_start = 105, .mappings_end = 112 } },
  [KC_QUOTE] = { action_key_style, .action_key = { .mappings_start = 112, .mappings_end = 116 } },
  [KC_BSLASH] = { action_key_style, .action_key = { .mappings_start = 116, .mappings_end = 117 } },
  [KC_Z] = { action_key_style, .action_key = { .mappings_start = 117, .mappings_end = 120 } },
  [KC_X] = { action_key_style, .action_key = { .mappings_start = 120, .mappings_end = 123 } },
  [KC_C] = { action_key_style, .action_key = { .mappings_start = 123, .mappings_end = 126 } },
  [KC_V] = { action_key_style, .action_key = { .mappings_start = 126, .mappings_end = 129 } },
  [KC_B] = { action_key_style, .action_key = { .mappings_start = 129, .mappings_end = 132 } },
  [KC_N] = { action_key_style, .action_key = { .mappings_start = 132, .mappings_end = 139 } },
  [KC_M] = { action_key_style, .action_key = { .mappings_start = 139, .mappings_end = 146 } },
  [KC_COMMA] = { action_key_style, .action_key = { .mappings_start = 146, .mappings_end = 153 } },
  [KC_DOT] = { action_key_style, .action_key = { .mappings_start = 153, .mappings_end = 156 } },
  [KC_SLASH] = { action_key_style, .action_key = { .mappings_start = 156, .mappings_end = 159 } },
  [KC_SPACE] = { action_key_style, .action_key = { .mappings_start = 159, .mappings_end = 160 } },
};

const int our_num_keys = (sizeof our_key_definitions)/(sizeof our_key_definitions[0]);
