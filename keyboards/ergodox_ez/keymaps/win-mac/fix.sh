#!/bin/sh
sed -i 's/KC_BSLASH/KC_BACKSLASH/g' keymap.c
sed -i 's/KC_SCOLON/KC_SEMICOLON/g' keymap.c
sed -i 's/KC_RBRACKET/KC_RBRC/g' keymap.c
sed -i 's/KC_LBRACKET/KC_LBRC/g' keymap.c
sed -i 's/KC_BSPACE/KC_BACKSPACE/g' keymap.c
sed -i 's/KC_PGDOWN/KC_PGDN/g' keymap.c
sed -i 's/KC_LSHIFT/KC_LSFT/g' keymap.c
sed -i 's/KC_LCTRL/KC_LCTL/g' keymap.c