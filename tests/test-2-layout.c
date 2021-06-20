static const struct mapping our_mappings_KC_1[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_1 },
};

static const struct mapping our_mappings_KC_2[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_7 },
};

static const struct mapping our_mappings_KC_3[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_5 },
};

static const struct mapping our_mappings_KC_4[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_3 },
};

static const struct mapping our_mappings_KC_5[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_1 },
};

static const struct mapping our_mappings_KC_6[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_9 },
};

static const struct mapping our_mappings_KC_7[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_0 },
};

static const struct mapping our_mappings_KC_8[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_2 },
};

static const struct mapping our_mappings_KC_9[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_4 },
};

static const struct mapping our_mappings_KC_0[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_6 },
};

static const struct mapping our_mappings_KC_MINUS[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_8 },
};

static const struct mapping our_mappings_KC_EQUAL[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_GRAVE },
};

static const struct mapping our_mappings_KC_Q[] = {
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = MOD1_MASK, .to_modifiers = 0, .to_action = KC_ESCAPE },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_SCOLON },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_SCOLON },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SCOLON },
};

static const struct mapping our_mappings_KC_W[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_COMMA },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_COMMA },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_LBRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_COMMA },
};

static const struct mapping our_mappings_KC_E[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_DOT },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_DOT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_RBRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_DOT },
};

static const struct mapping our_mappings_KC_R[] = {
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_5 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_P },
};

static const struct mapping our_mappings_KC_T[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Y },
};

static const struct mapping our_mappings_KC_Y[] = {
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_BSLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_F },
};

static const struct mapping our_mappings_KC_U[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_PGUP },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_PGUP },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_G },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_G },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_PGUP },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_8 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_G },
};

static const struct mapping our_mappings_KC_I[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_UP },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_UP },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_C },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_C },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_UP },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_RBRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_C },
};

static const struct mapping our_mappings_KC_O[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_R },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_R },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_LBRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_R },
};

static const struct mapping our_mappings_KC_P[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_L },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_L },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_BSLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_L },
};

static const struct mapping our_mappings_KC_LBRACKET[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_SLASH },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_SLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_GRAVE },
};

static const struct mapping our_mappings_KC_RBRACKET[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_6 },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_6 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_2 },
};

static const struct mapping our_mappings_KC_A[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_A },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_A },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_A },
};

static const struct mapping our_mappings_KC_S[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_O },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_O },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_O },
};

static const struct mapping our_mappings_KC_D[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_E },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_E },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_E },
};

static const struct mapping our_mappings_KC_F[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_U },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_U },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_EQUAL },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_U },
};

static const struct mapping our_mappings_KC_G[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_I },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_I },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_I },
};

static const struct mapping our_mappings_KC_H[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_HOME },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_HOME },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_D },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_D },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_HOME },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_7 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_D },
};

static const struct mapping our_mappings_KC_J[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD5_MASK|MOD6_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK|LEFT_META_MASK, .to_action = KC_H },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_LEFT },
  { .from_modifiers = MOD5_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_0 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_H },
};

static const struct mapping our_mappings_KC_K[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_DOWN },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_DOWN },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_T },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_T },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_DOWN },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_9 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_T },
};

static const struct mapping our_mappings_KC_L[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD5_MASK|MOD6_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK|LEFT_META_MASK, .to_action = KC_N },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_RIGHT },
  { .from_modifiers = MOD5_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_N },
};

static const struct mapping our_mappings_KC_SCOLON[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_END },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_END },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_S },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_S },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_END },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_MINUS },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_S },
};

static const struct mapping our_mappings_KC_QUOTE[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_2 },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_2 },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_4 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_MINUS },
};

static const struct mapping our_mappings_KC_BSLASH[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_TAB },
};

static const struct mapping our_mappings_KC_Z[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_QUOTE },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_QUOTE },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_QUOTE },
};

static const struct mapping our_mappings_KC_X[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_Q },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_Q },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Q },
};

static const struct mapping our_mappings_KC_C[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_J },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_J },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_J },
};

static const struct mapping our_mappings_KC_V[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_K },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_K },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_K },
};

static const struct mapping our_mappings_KC_B[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_X },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_X },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_X },
};

static const struct mapping our_mappings_KC_N[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_B },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_B },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_1 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_B },
};

static const struct mapping our_mappings_KC_M[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_PGDOWN },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_PGDOWN },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_M },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_M },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_PGDOWN },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_EQUAL },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_M },
};

static const struct mapping our_mappings_KC_COMMA[] = {
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_W },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_W },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_3 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_W },
};

static const struct mapping our_mappings_KC_DOT[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_V },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_V },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_V },
};

static const struct mapping our_mappings_KC_SLASH[] = {
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_Z },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_Z },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Z },
};

static const struct mapping our_mappings_KC_SPACE[] = {
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SPACE },
};


static const struct key_definition our_key_definitions[] = {
  [KC_TAB] = { modifier_key_style, .modifier_key = { MOD4_MASK, 0 } },
  [KC_GRAVE] = { modifier_key_style, .modifier_key = { MOD6_MASK, LEFT_META_MASK } },
  [KC_LSHIFT] = { modifier_key_style, .modifier_key = { MOD2_MASK, LEFT_SHIFT_MASK } },
  [KC_RSHIFT] = { modifier_key_style, .modifier_key = { MOD3_MASK, RIGHT_SHIFT_MASK } },
  [KC_LALT] = { modifier_key_style, .modifier_key = { MOD5_MASK, LEFT_ALT_MASK } },
  [KC_CAPSLOCK] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },
  [KC_RALT] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },
  [KC_LGUI] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },

  [KC_1] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_1 } },
  [KC_2] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_2 } },
  [KC_3] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_3 } },
  [KC_4] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_4 } },
  [KC_5] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_5 } },
  [KC_6] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_6 } },
  [KC_7] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_7 } },
  [KC_8] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_8 } },
  [KC_9] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_9 } },
  [KC_0] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_0 } },
  [KC_MINUS] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_MINUS } },
  [KC_EQUAL] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_EQUAL } },
  [KC_Q] = { action_key_style, .action_key = { .num_mappings = 4, .mappings = our_mappings_KC_Q } },
  [KC_W] = { action_key_style, .action_key = { .num_mappings = 4, .mappings = our_mappings_KC_W } },
  [KC_E] = { action_key_style, .action_key = { .num_mappings = 4, .mappings = our_mappings_KC_E } },
  [KC_R] = { action_key_style, .action_key = { .num_mappings = 2, .mappings = our_mappings_KC_R } },
  [KC_T] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_T } },
  [KC_Y] = { action_key_style, .action_key = { .num_mappings = 2, .mappings = our_mappings_KC_Y } },
  [KC_U] = { action_key_style, .action_key = { .num_mappings = 7, .mappings = our_mappings_KC_U } },
  [KC_I] = { action_key_style, .action_key = { .num_mappings = 7, .mappings = our_mappings_KC_I } },
  [KC_O] = { action_key_style, .action_key = { .num_mappings = 4, .mappings = our_mappings_KC_O } },
  [KC_P] = { action_key_style, .action_key = { .num_mappings = 4, .mappings = our_mappings_KC_P } },
  [KC_LBRACKET] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_LBRACKET } },
  [KC_RBRACKET] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_RBRACKET } },
  [KC_A] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_A } },
  [KC_S] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_S } },
  [KC_D] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_D } },
  [KC_F] = { action_key_style, .action_key = { .num_mappings = 4, .mappings = our_mappings_KC_F } },
  [KC_G] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_G } },
  [KC_H] = { action_key_style, .action_key = { .num_mappings = 7, .mappings = our_mappings_KC_H } },
  [KC_J] = { action_key_style, .action_key = { .num_mappings = 9, .mappings = our_mappings_KC_J } },
  [KC_K] = { action_key_style, .action_key = { .num_mappings = 7, .mappings = our_mappings_KC_K } },
  [KC_L] = { action_key_style, .action_key = { .num_mappings = 9, .mappings = our_mappings_KC_L } },
  [KC_SCOLON] = { action_key_style, .action_key = { .num_mappings = 7, .mappings = our_mappings_KC_SCOLON } },
  [KC_QUOTE] = { action_key_style, .action_key = { .num_mappings = 4, .mappings = our_mappings_KC_QUOTE } },
  [KC_BSLASH] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_BSLASH } },
  [KC_Z] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_Z } },
  [KC_X] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_X } },
  [KC_C] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_C } },
  [KC_V] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_V } },
  [KC_B] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_B } },
  [KC_N] = { action_key_style, .action_key = { .num_mappings = 7, .mappings = our_mappings_KC_N } },
  [KC_M] = { action_key_style, .action_key = { .num_mappings = 7, .mappings = our_mappings_KC_M } },
  [KC_COMMA] = { action_key_style, .action_key = { .num_mappings = 7, .mappings = our_mappings_KC_COMMA } },
  [KC_DOT] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_DOT } },
  [KC_SLASH] = { action_key_style, .action_key = { .num_mappings = 3, .mappings = our_mappings_KC_SLASH } },
  [KC_SPACE] = { action_key_style, .action_key = { .num_mappings = 1, .mappings = our_mappings_KC_SPACE } },
};

static const struct layout our_layout = {
  .num_keys = (sizeof our_key_definitions)/(sizeof our_key_definitions[0]),
  .key_definitions = our_key_definitions
};
