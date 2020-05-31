#include "haku.h"

void keyboard_pre_init_kb(void) {
    setPinOutput(INDICATOR_PIN_SCROLL);
    setPinOutput(INDICATOR_PIN_NUM);
    setPinOutput(INDICATOR_PIN_CAPS);

    keyboard_pre_init_user();
}

bool led_update_kb(led_t led_state) {
    bool runDefault = led_update_user(led_state);
    if (runDefault) {
      writePin(INDICATOR_PIN_SCROLL, !led_state.scroll_lock);
      writePin(INDICATOR_PIN_NUM, !led_state.num_lock);
      writePin(INDICATOR_PIN_CAPS, !led_state.caps_lock);
    }
    return runDefault;
}
