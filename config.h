/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define USB_SUSPEND_WAKEUP_DELAY 0
#define ORYX_CONFIGURATOR
#define NO_USB_STARTUP_CHECK

#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define TAPPING_TERM_PER_KEY

#define UNICODE_SELECTED_MODES UC_WINC

#undef TAPPING_TERM
#define TAPPING_TERM 160
