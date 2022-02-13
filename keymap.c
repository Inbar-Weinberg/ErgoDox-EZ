#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_hebrew.h"
#include "keyboardLayers.h"
#include "keyDefines.h"
#include "greekUnicodeNames.h"
#include "tapDanceCodes.h"

//
enum custom_keycodes {
    RGB_SLD = EZ_SAFE_RANGE,
    LYX_LANG,
    LANG_HEB,
};
// uint8_t mod_state;
// static bool fMem_registered;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_baseLayer] = LAYOUT_ergodox(
        // Left
        //
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, TD(DNC_PRT_SCRN), TD(DNC_COPY_CUT), KC_PASTE, KC_UNDO, KC_REDO,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        GUI_T(KC_ESC), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_HOME,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_WIN_CHANGE, KC_A, KC_S, ALT_T(KC_D), CTL_T(KC_F), KC_G,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_MS_WH_UP, KC_Z, KC_X, KC_UP, KC_V, KC_B, KC_END,
        //--------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_MS_WH_DOWN, XXX, KC_LEFT, KC_DOWN, SFT_T(KC_RIGHT),
        //                                                                                            || --------------- || --------------- ||
        KC_ENTER, XXX,
        //                                                                                                               || --------------- ||
        XXX,
        //                                                                         || --------------- || --------------- || --------------- ||
        LT(3, KC_SPACE), LT(8, KC_TAB), LT(7, KC_BSPACE),

        // Right
        //|---------------*|-----------------*|-----------------*|-----------------*|-----------------*|-----------------*|--------------------||
        XXX, /*-----------*/ XXX, /*---------*/ XXX, /*---------*/ XXX, /*---------*/ XXX, /*---------*/ XXX, /*---------*/ XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, KC_Y, KC_U, KC_I, KC_O, XXX, GUI_T(KC_ESC),
        //                || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_H, CTL_T(KC_J), ALT_T(KC_K), KC_L, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        LANG_HEB, KC_N, KC_M, KC_P, KC_C, XXX, XXX,
        //                                   || --------------- || --------------- || --------------- || --------------- || --------------- ||
        SFT_T(KC_BSPACE), KC_DELETE, XXX, XXX, XXX,
        //--------------- || --------------- ||
        VOL_DOWN, VOL_UP,
        //--------------- ||
        XXX,
        //--------------- || --------------- || --------------- ||
        KC_LAN_CHANGE, TG(1), LT(3, KC_ENTER)),

    [_hebrewLayer] = LAYOUT_ergodox(
        // Left
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*-----------*/ XXX, /*---------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ TD(DNC_ESC_HEB_GUI), KC_NO, IL_GIML, /**/ IL_ALEF, /*----*/ IL_AYIN, /*------*/ KC_NO, /*--------*/ XXX,
        // -------------------*1------------------*2------------------*3------------------*4------------------*5------------------*6------------------end
        /**/ XXX, IL_SHIN, IL_HE, TD(DNC_VAV_ALT), TD(DNC_RESH_CTL), IL_ZAYN,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, KC_NO, IL_DALT, XXX /*arrow up*/, TD(DNC_NUN), TD(DNC_TSDI), XXX,
        //--------------------*-------------------*1------------------*2------------------*3------------------*4------------------*5------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------end
        /**/ XXX, XXX,
        // 1------------------end
        /**/ XXX,
        // 1------------------*2------------------*3------------------end
        /**/ LT(5, KC_SPACE), XXX, XXX,

        // Right
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ TD(DNC_KAF), /*--*/ IL_TAV, /*-------*/ TD(DNC_PE), /*---*/ KC_NO, /*--------*/ TD(DNC_ESC_HEB_GUI),
        // -------------------*1------------------*2------------------*3------------------*4------------------*5------------------*6------------------end
        /*--------------------*/ IL_HET, /*-------*/ TD(DNC_LAMD_CTL), TD(DNC_MEM), /*----*/ TD(DNC_YOD_ALT), /**/IL_QOF, /*------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ LANG_HEB, /*-----*/ IL_TET, /*-------*/ IL_BET, /*-------*/ KC_NO, /*--------*/ IL_SMKH, /*------*/ KC_NO, /*--------*/ XXX,
        //--------------------*-------------------*1------------------*2------------------*3------------------*4------------------*5------------------end
        /*--------------------*-------------------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------end
        /**/ XXX, /*----------*/ XXX,
        // 1------------------end
        /**/ XXX,
        // 1------------------*2------------------*3------------------end
        /**/ XXX, /*-------*/ XXX, /*---------*/ LT(5, KC_ENTER)),

    [_lyxLayer] = LAYOUT_ergodox(
        // Left
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, TD(DNC_D_ALTM), TD(DNC_F_CTRLM), XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, ALT_T(KC_UP), CTL_T(KC_V), XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX,
        //                                                                                            || --------------- || --------------- ||
        XXX, XXX,
        //                                                                                                               || --------------- ||
        XXX,
        //                                                                         || --------------- || --------------- || --------------- ||
        LT(6, KC_SPACE), XXX, XXX,

        // Right
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //                || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, TD(DNC_J_CTRLM), TD(DNC_K_ALTM), XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, CTL_T(KC_M), ALT_T(KC_P), XXX, XXX, XXX,
        //                                   || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- ||
        XXX, XXX,
        //--------------- ||
        XXX,
        //--------------- || --------------- || --------------- ||TD(DNC_F_CTRLM)
        XXX, TO(0), LT(6, KC_ENTER)),

    [_numLayer] = LAYOUT_ergodox(  // layer 3
                                   // Left
                                   //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, KC_GRAVE, KC_SLASH, KC_CIRCUMFLEX, KC_BSLASH, KC_ASTERISK, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, KC_TILDE, KC_MINUS, ALT_T(KC_EQUAL), TD(DNC_PLUS_CTL), KC_DOUBLE_QUOTE,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, KC_L_ANG_BRC, KC_UNDERSCORE, KC_R_ANG_BRC, KC_QUOTE, KC_COLON,
        //--------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, KC_AMPERSAND, KC_PIPE, KC_LEFT_PAREN,
        //                                                                                            || --------------- || --------------- ||
        XXX, XXX,
        //                                                                                                               || --------------- ||
        XXX,
        //                                                                         || --------------- || --------------- || --------------- ||
        KC_RIGHT_PAREN, XXX, XXX,
        // Right
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_F8, KC_SCOLON, TD(DNC_7_LSQB), TD(DNC_8_RSQB), KC_9, KC_HASH, XXX,
        //                || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_DOT, CTL_T(KC_4), ALT_T(KC_5), KC_6, KC_PERCENT, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_F4, KC_COMMA, TD(DNC_1_LCRB), TD(DNC_2_RCRB), KC_3, KC_DOLLAR, XXX,
        //                                   || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_QUESTION, KC_EXLM, KC_AT, XXX, XXX,
        //--------------- || --------------- ||
        XXX, XXX,
        //--------------- ||
        XXX,
        //--------------- || --------------- || --------------- ||
        LYX_LANG, TO(2), KC_0),

    /////////////////////////////////////////////////
    [_numLayerHebrew] = LAYOUT_ergodox(  // Layer 5
                                         // Left
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, IL_SLSH, IL_CIRC, IL_BSLS, IL_ASTR, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, IL_TILD, IL_MINS, ALT_T(IL_EQL), TD(DNC_PLUS_CTL), IL_DQUO,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, IL_LABK, IL_UNDS, IL_RABK, IL_QUOT, IL_COLN,
        //--------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, IL_AMPR, IL_PIPE, IL_LPRN,
        //                                                                                            || --------------- || --------------- ||
        XXX, XXX,
        //                                                                                                               || --------------- ||
        XXX,
        //                                                                         || --------------- || --------------- || --------------- ||
        IL_RPRN, XXX, XXX,

        // Right
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_F8, IL_SCLN, TD(DNC_7H_LSQB), TD(DNC_8H_RSQB), KC_9, IL_PND, XXX,
        //                || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        IL_DOT, CTL_T(IL_4), ALT_T(IL_5), IL_6, IL_PERC, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_F4, IL_COMM, TD(DNC_1H_LCRB), TD(DNC_2H_RCRB), KC_3, IL_DLR, XXX,
        //                                   || --------------- || --------------- || --------------- || --------------- || --------------- ||
        IL_QUES, IL_EXLM, IL_AT, XXX, XXX,
        //--------------- || --------------- ||
        XXX, XXX,
        //--------------- ||
        XXX,
        //--------------- || --------------- || --------------- ||
        LYX_LANG, TO(2), KC_0),

    [_numLayerLyx] = LAYOUT_ergodox(  // layer 6
                                      // Left
                                      //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, KC_GRAVE, KC_SLASH, KC_CIRCUMFLEX, KC_BSLASH, KC_ASTERISK, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, KC_TILDE, KC_MINUS, TD(DNC_EQL_ALTM), TD(DNC_PLS_CTRLM), KC_DOUBLE_QUOTE,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, KC_L_ANG_BRC, KC_UNDERSCORE, KC_R_ANG_BRC, KC_QUOTE, KC_COLON,
        //--------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, KC_AMPERSAND, KC_PIPE, KC_LEFT_PAREN,
        //                                                                                            || --------------- || --------------- ||
        XXX, XXX,
        //                                                                                                               || --------------- ||
        XXX,
        //                                                                         || --------------- || --------------- || --------------- ||
        KC_RIGHT_PAREN, XXX, XXX,
        // Right
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_F8, KC_SCOLON, TD(DNC_7_LSQB), TD(DNC_8_RSQB), KC_9, KC_HASH, XXX,
        //                || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_DOT, TD(DNC_4_CTRLM), TD(DNC_5_ALTM), KC_6, KC_PERCENT, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_F4, KC_COMMA, TD(DNC_1_LCRB), TD(DNC_2_RCRB), KC_3, KC_DOLLAR, XXX,
        //                                   || --------------- || --------------- || --------------- || --------------- || --------------- ||
        KC_QUESTION, KC_EXLM, KC_AT, XXX, XXX,
        //--------------- || --------------- ||
        XXX, XXX,
        //--------------- ||
        XXX,
        //--------------- || --------------- || --------------- ||
        LYX_LANG, TO(1), KC_0),

    [_fnLayer] = LAYOUT_ergodox(
        // Left
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX,
        //                                                                                            || --------------- || --------------- ||
        XXX, XXX,
        //                                                                                                               || --------------- ||
        XXX,
        //                                                                         || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX,

        // Right
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, KC_F10, KC_F11, KC_F12, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, KC_F7, KC_F8, KC_F9, XXX, XXX,
        //                || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, KC_F4, KC_F5, KC_F6, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, KC_F1, KC_F2, KC_F3, XXX, XXX,
        //                                   || --------------- || --------------- || --------------- || --------------- || --------------- ||
        XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- ||
        XXX, XXX,
        //--------------- ||
        XXX,
        //--------------- || --------------- || --------------- ||
        XXX, XXX, XXX),

    [_greekLayer] = LAYOUT_ergodox(
        // Left
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, X(omegaPi), XP(omega, omegaCap), XP(epsilon, epsilonCap), XP(rho, rhoCap), XP(tau, tauCap), XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, XP(alpha, alphaCap), XP(sigma, sigmaCap), XP(delta, deltaCap), XP(phi, phiCap), XP(gamma, gammaCap),
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, XP(zeta, zetaCap), XP(xi, xiCap), XXX, X(phiEmptySet), XP(beta, betaCap), XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, XXX, XXX, XXX, XXX,

        //                                                                                                   || -------------------- || -------------------- ||
        XXX, XXX,
        //                                                                                                                           || -------------------- ||
        XXX,
        //                                                                           || -------------------- || -------------------- || -------------------- ||
        XXX, XXX, XXX,

        // Right
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, XP(psi, psiCap), XP(upsilon, upsilonCap), XP(iota, iotaCap), XP(omicron, omegaCap), XXX, XXX,
        //                           || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XP(eta, etaCap), XP(theta, thetaCap), XP(kappa, kappaCap), XP(lambda, lambdaCap), XXX, XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, XP(nu, nuCap), XP(mu, muCap), XP(pi, phiCap), XP(chi, chiCap), XXX, XXX,
        //                                                   || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        XXX, XXX, XXX, XXX, XXX,

        // ------------------------- || -------------------- ||
        XXX, XXX,
        // ------------------------- ||
        XXX,
        // ------------------------- || -------------------- || -------------------- ||
        XXX, XXX, XXX),
};
// Macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // mod_state = get_mods();
    switch (keycode) {
            // case IL_MEM:
            //     if (record->event.pressed) {
            //         if (mod_state & MOD_MASK_SHIFT) {
            //             del_mods(MOD_MASK_SHIFT);
            //             register_code(IL_FMEM);
            //             fMem_registered = true;
            //             set_mods(mod_state);
            //             return false;
            //         }
            //     } else {
            //         if (fMem_registered) {
            //             unregister_code(IL_FMEM);
            //             fMem_registered = false;
            //             return false;
            //         }
            //     }
            //     break;

        case LYX_LANG:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_F1));
                layer_invert(1);
            }
            break;
        case LANG_HEB:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_LSHIFT)));
                layer_invert(1);
            }
            break;
    }
    return true;
}

uint32_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case _hebrewLayer:
            ergodox_right_led_1_on();
            break;
        case _numLayer:
        case _numLayerHebrew:
        case _numLayerLyx:
            ergodox_right_led_2_on();
            break;
        case _fnLayer:
        case _greekLayer:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case _lyxLayer:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
        default:
            break;
    }
    return state;
};

// costum keys "permissive_hold"
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_SPACE):
        case LT(4, KC_SPACE):
        case LT(5, KC_SPACE):
        case LT(6, KC_SPACE):

        case LT(3, KC_ENTER):
        case LT(4, KC_ENTER):
        case LT(5, KC_ENTER):
        case LT(6, KC_ENTER):

            return true;
        default:
            return false;
    }
}

// costum keys "hold_on_other_key_press"
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_SPACE):
        case LT(4, KC_SPACE):
        case LT(5, KC_SPACE):
        case LT(6, KC_SPACE):

        case LT(3, KC_ENTER):
        case LT(4, KC_ENTER):
        case LT(5, KC_ENTER):
        case LT(6, KC_ENTER):

            return true;
        default:
            return false;
    }
}

// costum keys tapping term
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GUI_T(KC_ESC):
        case ALT_T(KC_D):
        case ALT_T(KC_K):
        case CTL_T(KC_F):
        case CTL_T(KC_J):

        case ALT_T(KC_P):
        case ALT_T(KC_UP):
        case CTL_T(KC_V):
        case CTL_T(KC_M):
            return TAPPING_TERM * 1.2;
        default:
            return TAPPING_TERM;
    }
}

// tap dances
typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[TAP_DANCE_ENUM_LAST];
int        tdWaitTime = 10;

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_DNC_NUN(qk_tap_dance_state_t *state, void *user_data);
void DNC_NUN_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_NUN_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_NUN(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if (state->count > 3) {
        tap_code16(KC_B);
    }
}

void DNC_NUN_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_NUN].step = dance_step(state);
    switch (dance_state[DNC_NUN].step) {
        case SINGLE_TAP:
            register_code16(KC_B);
            break;
        case SINGLE_HOLD:
            register_code16(KC_I);
            break;
        case DOUBLE_TAP:
            register_code16(KC_B);
            register_code16(KC_B);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_B);
            register_code16(KC_B);
    }
}

void DNC_NUN_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_NUN].step) {
        case SINGLE_TAP:
            unregister_code16(KC_B);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_I);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_B);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_B);
            break;
    }
    dance_state[DNC_NUN].step = 0;
}

void on_DNC_TSDI(qk_tap_dance_state_t *state, void *user_data);
void DNC_TSDI_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_TSDI_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_TSDI(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_M);
        tap_code16(KC_M);
        tap_code16(KC_M);
    }
    if (state->count > 3) {
        tap_code16(KC_M);
    }
}

void DNC_TSDI_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_TSDI].step = dance_step(state);
    switch (dance_state[DNC_TSDI].step) {
        case SINGLE_TAP:
            register_code16(KC_M);
            break;
        case SINGLE_HOLD:
            register_code16(KC_DOT);
            break;
        case DOUBLE_TAP:
            register_code16(KC_M);
            register_code16(KC_M);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_M);
            register_code16(KC_M);
    }
}

void DNC_TSDI_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_TSDI].step) {
        case SINGLE_TAP:
            unregister_code16(KC_M);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_DOT);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_M);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_M);
            break;
    }
    dance_state[DNC_TSDI].step = 0;
}

void on_DNC_KAF(qk_tap_dance_state_t *state, void *user_data);
void DNC_KAF_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_KAF_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_KAF(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if (state->count > 3) {
        tap_code16(KC_F);
    }
}

void DNC_KAF_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_KAF].step = dance_step(state);
    switch (dance_state[DNC_KAF].step) {
        case SINGLE_TAP:
            register_code16(KC_F);
            break;
        case SINGLE_HOLD:
            register_code16(KC_L);
            break;
        case DOUBLE_TAP:
            register_code16(KC_F);
            register_code16(KC_F);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_F);
            register_code16(KC_F);
    }
}

void DNC_KAF_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_KAF].step) {
        case SINGLE_TAP:
            unregister_code16(KC_F);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_L);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_F);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_F);
            break;
    }
    dance_state[DNC_KAF].step = 0;
}

void on_DNC_MEM(qk_tap_dance_state_t *state, void *user_data);
void DNC_MEM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_MEM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_MEM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_N);
        tap_code16(KC_N);
        tap_code16(KC_N);
    }
    if (state->count > 3) {
        tap_code16(KC_N);
    }
}

void DNC_MEM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_MEM].step = dance_step(state);
    switch (dance_state[DNC_MEM].step) {
        case SINGLE_TAP:
            register_code16(KC_N);
            break;
        case SINGLE_HOLD:
            register_code16(KC_O);
            break;
        case DOUBLE_TAP:
            register_code16(KC_N);
            register_code16(KC_N);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_N);
            register_code16(KC_N);
    }
}

void DNC_MEM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_MEM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_N);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_O);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_N);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_N);
            break;
    }
    dance_state[DNC_MEM].step = 0;
}

void on_DNC_PE(qk_tap_dance_state_t *state, void *user_data);
void DNC_PE_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_PE_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_PE(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if (state->count > 3) {
        tap_code16(KC_P);
    }
}

void DNC_PE_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_PE].step = dance_step(state);
    switch (dance_state[DNC_PE].step) {
        case SINGLE_TAP:
            register_code16(KC_P);
            break;
        case SINGLE_HOLD:
            register_code16(KC_SCOLON);
            break;
        case DOUBLE_TAP:
            register_code16(KC_P);
            register_code16(KC_P);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_P);
            register_code16(KC_P);
    }
}

void DNC_PE_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_PE].step) {
        case SINGLE_TAP:
            unregister_code16(KC_P);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_SCOLON);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_P);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_P);
            break;
    }
    dance_state[DNC_PE].step = 0;
}

void on_DNC_PRT_SCRN(qk_tap_dance_state_t *state, void *user_data);
void DNC_PRT_SCRN_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_PRT_SCRN_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_PRT_SCRN(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LGUI(KC_PSCREEN));
        tap_code16(LGUI(KC_PSCREEN));
        tap_code16(LGUI(KC_PSCREEN));
    }
    if (state->count > 3) {
        tap_code16(LGUI(KC_PSCREEN));
    }
}

void DNC_PRT_SCRN_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_PRT_SCRN].step = dance_step(state);
    switch (dance_state[DNC_PRT_SCRN].step) {
        case SINGLE_TAP:
            register_code16(LGUI(KC_PSCREEN));
            break;
        case SINGLE_HOLD:
            register_code16(LGUI(LSFT(KC_S)));
            break;
        case DOUBLE_TAP:
            register_code16(LGUI(KC_PSCREEN));
            register_code16(LGUI(KC_PSCREEN));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LGUI(KC_PSCREEN));
            register_code16(LGUI(KC_PSCREEN));
    }
}

void DNC_PRT_SCRN_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_PRT_SCRN].step) {
        case SINGLE_TAP:
            unregister_code16(LGUI(KC_PSCREEN));
            break;
        case SINGLE_HOLD:
            unregister_code16(LGUI(LSFT(KC_S)));
            break;
        case DOUBLE_TAP:
            unregister_code16(LGUI(KC_PSCREEN));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LGUI(KC_PSCREEN));
            break;
    }
    dance_state[DNC_PRT_SCRN].step = 0;
}

void on_DNC_COPY_CUT(qk_tap_dance_state_t *state, void *user_data);
void DNC_COPY_CUT_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_COPY_CUT_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_COPY_CUT(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if (state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void DNC_COPY_CUT_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_COPY_CUT].step = dance_step(state);
    switch (dance_state[DNC_COPY_CUT].step) {
        case SINGLE_TAP:
            register_code16(LCTL(KC_C));
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_X));
            break;
        case DOUBLE_TAP:
            register_code16(LCTL(KC_C));
            register_code16(LCTL(KC_C));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LCTL(KC_C));
            register_code16(LCTL(KC_C));
    }
}

void DNC_COPY_CUT_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_COPY_CUT].step) {
        case SINGLE_TAP:
            unregister_code16(LCTL(KC_C));
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_X));
            break;
        case DOUBLE_TAP:
            unregister_code16(LCTL(KC_C));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LCTL(KC_C));
            break;
    }
    dance_state[DNC_COPY_CUT].step = 0;
}

void on_DNC_PLUS_CTL(qk_tap_dance_state_t *state, void *user_data);
void DNC_PLUS_CTL_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_PLUS_CTL_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_PLUS_CTL(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LSFT(KC_EQUAL));
        tap_code16(LSFT(KC_EQUAL));
        tap_code16(LSFT(KC_EQUAL));
    }
    if (state->count > 3) {
        tap_code16(LSFT(KC_EQUAL));
    }
}

void DNC_PLUS_CTL_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_PLUS_CTL].step = dance_step(state);
    switch (dance_state[DNC_PLUS_CTL].step) {
        case SINGLE_TAP:
            register_code16(LSFT(KC_EQUAL));
            break;
        case SINGLE_HOLD:
            register_code16(KC_LCTRL);
            break;
        case DOUBLE_TAP:
            register_code16(LSFT(KC_EQUAL));
            register_code16(LSFT(KC_EQUAL));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LSFT(KC_EQUAL));
            register_code16(LSFT(KC_EQUAL));
    }
}

void DNC_PLUS_CTL_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_PLUS_CTL].step) {
        case SINGLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LCTRL);
            break;
        case DOUBLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
    }
    dance_state[DNC_PLUS_CTL].step = 0;
}

void on_DNC_7_LSQB(qk_tap_dance_state_t *state, void *user_data);
void DNC_7_LSQB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_7_LSQB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_7_LSQB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if (state->count > 3) {
        tap_code16(KC_7);
    }
}

void DNC_7_LSQB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_7_LSQB].step = dance_step(state);
    switch (dance_state[DNC_7_LSQB].step) {
        case SINGLE_TAP:
            register_code16(KC_7);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LBRACKET);
            break;
        case DOUBLE_TAP:
            register_code16(KC_7);
            register_code16(KC_7);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_7);
            register_code16(KC_7);
    }
}

void DNC_7_LSQB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_7_LSQB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_7);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LBRACKET);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_7);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_7);
            break;
    }
    dance_state[DNC_7_LSQB].step = 0;
}

void on_DNC_8_RSQB(qk_tap_dance_state_t *state, void *user_data);
void DNC_8_RSQB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_8_RSQB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_8_RSQB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if (state->count > 3) {
        tap_code16(KC_8);
    }
}

void DNC_8_RSQB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_8_RSQB].step = dance_step(state);
    switch (dance_state[DNC_8_RSQB].step) {
        case SINGLE_TAP:
            register_code16(KC_8);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RBRACKET);
            break;
        case DOUBLE_TAP:
            register_code16(KC_8);
            register_code16(KC_8);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_8);
            register_code16(KC_8);
    }
}

void DNC_8_RSQB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_8_RSQB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_8);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RBRACKET);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_8);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_8);
            break;
    }
    dance_state[DNC_8_RSQB].step = 0;
}

void on_DNC_1_LCRB(qk_tap_dance_state_t *state, void *user_data);
void DNC_1_LCRB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_1_LCRB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_1_LCRB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if (state->count > 3) {
        tap_code16(KC_1);
    }
}

void DNC_1_LCRB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_1_LCRB].step = dance_step(state);
    switch (dance_state[DNC_1_LCRB].step) {
        case SINGLE_TAP:
            register_code16(KC_1);
            break;
        case SINGLE_HOLD:
            register_code16(LSFT(KC_LBRACKET));
            break;
        case DOUBLE_TAP:
            register_code16(KC_1);
            register_code16(KC_1);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_1);
            register_code16(KC_1);
    }
}

void DNC_1_LCRB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_1_LCRB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_1);
            break;
        case SINGLE_HOLD:
            unregister_code16(LSFT(KC_LBRACKET));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_1);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_1);
            break;
    }
    dance_state[DNC_1_LCRB].step = 0;
}

void on_DNC_2_RCRB(qk_tap_dance_state_t *state, void *user_data);
void DNC_2_RCRB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_2_RCRB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_2_RCRB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if (state->count > 3) {
        tap_code16(KC_2);
    }
}

void DNC_2_RCRB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_2_RCRB].step = dance_step(state);
    switch (dance_state[DNC_2_RCRB].step) {
        case SINGLE_TAP:
            register_code16(KC_2);
            break;
        case SINGLE_HOLD:
            register_code16(LSFT(KC_RBRACKET));
            break;
        case DOUBLE_TAP:
            register_code16(KC_2);
            register_code16(KC_2);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_2);
            register_code16(KC_2);
    }
}

void DNC_2_RCRB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_2_RCRB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_2);
            break;
        case SINGLE_HOLD:
            unregister_code16(LSFT(KC_RBRACKET));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_2);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_2);
            break;
    }
    dance_state[DNC_2_RCRB].step = 0;
}

void on_DNC_VAV_ALT(qk_tap_dance_state_t *state, void *user_data);
void DNC_VAV_ALT_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_VAV_ALT_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_VAV_ALT(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if (state->count > 3) {
        tap_code16(KC_U);
    }
}

void DNC_VAV_ALT_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_VAV_ALT].step = dance_step(state);
    switch (dance_state[DNC_VAV_ALT].step) {
        case SINGLE_TAP:
            register_code16(KC_U);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LALT);
            break;
        case DOUBLE_TAP:
            register_code16(KC_U);
            register_code16(KC_U);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_U);
            register_code16(KC_U);
    }
}

void DNC_VAV_ALT_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_VAV_ALT].step) {
        case SINGLE_TAP:
            unregister_code16(KC_U);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LALT);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_U);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_U);
            break;
    }
    dance_state[DNC_VAV_ALT].step = 0;
}

void on_DNC_YOD_ALT(qk_tap_dance_state_t *state, void *user_data);
void DNC_YOD_ALT_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_YOD_ALT_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_YOD_ALT(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_H);
        tap_code16(KC_H);
        tap_code16(KC_H);
    }
    if (state->count > 3) {
        tap_code16(KC_H);
    }
}

void DNC_YOD_ALT_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_YOD_ALT].step = dance_step(state);
    switch (dance_state[DNC_YOD_ALT].step) {
        case SINGLE_TAP:
            register_code16(KC_H);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LALT);
            break;
        case DOUBLE_TAP:
            register_code16(KC_H);
            register_code16(KC_H);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_H);
            register_code16(KC_H);
    }
}

void DNC_YOD_ALT_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_YOD_ALT].step) {
        case SINGLE_TAP:
            unregister_code16(KC_H);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LALT);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_H);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_H);
            break;
    }
    dance_state[DNC_YOD_ALT].step = 0;
}

// new dance
void on_DNC_ESC_HEB_GUI(qk_tap_dance_state_t *state, void *user_data);
void DNC_ESC_HEB_GUI_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_ESC_HEB_GUI_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_ESC_HEB_GUI(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_ESC);
        tap_code16(KC_ESC);
        tap_code16(KC_ESC);
    }
    if (state->count > 3) {
        tap_code16(KC_ESC);
    }
}

void DNC_ESC_HEB_GUI_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_ESC_HEB_GUI].step = dance_step(state);
    switch (dance_state[DNC_ESC_HEB_GUI].step) {
        case SINGLE_TAP:
            register_code16(KC_ESC);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LGUI);
            break;
        case DOUBLE_TAP:
            register_code16(KC_ESC);
            register_code16(KC_ESC);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_ESC);
            register_code16(KC_ESC);
    }
}
void DNC_ESC_HEB_GUI_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_ESC_HEB_GUI].step) {
        case SINGLE_TAP:
            unregister_code16(KC_ESC);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LGUI);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_ESC);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_ESC);
            break;
    }
    dance_state[DNC_ESC_HEB_GUI].step = 0;
}

void on_DNC_LAMD_CTL(qk_tap_dance_state_t *state, void *user_data);
void DNC_LAMD_CTL_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_LAMD_CTL_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_LAMD_CTL(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(IL_LAMD);
        tap_code16(IL_LAMD);
        tap_code16(IL_LAMD);
    }
    if (state->count > 3) {
        tap_code16(IL_LAMD);
    }
}

void DNC_LAMD_CTL_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_LAMD_CTL].step = dance_step(state);
    switch (dance_state[DNC_LAMD_CTL].step) {
        case SINGLE_TAP:
            register_code16(IL_LAMD);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LCTL);
            break;
        case DOUBLE_TAP:
            register_code16(IL_LAMD);
            register_code16(IL_LAMD);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(IL_LAMD);
            register_code16(IL_LAMD);
    }
}

void DNC_LAMD_CTL_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_LAMD_CTL].step) {
        case SINGLE_TAP:
            unregister_code16(IL_LAMD);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LCTL);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(IL_LAMD);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(IL_LAMD);
            break;
    }
    dance_state[DNC_LAMD_CTL].step = 0;
}
// new dance
void on_DNC_RESH_CTL(qk_tap_dance_state_t *state, void *user_data);
void DNC_RESH_CTL_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_RESH_CTL_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_RESH_CTL(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(IL_RESH);
        tap_code16(IL_RESH);
        tap_code16(IL_RESH);
    }
    if (state->count > 3) {
        tap_code16(IL_RESH);
    }
}

void DNC_RESH_CTL_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_RESH_CTL].step = dance_step(state);
    switch (dance_state[DNC_RESH_CTL].step) {
        case SINGLE_TAP:
            register_code16(IL_RESH);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LCTL);
            break;
        case DOUBLE_TAP:
            register_code16(IL_RESH);
            register_code16(IL_RESH);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(IL_RESH);
            register_code16(IL_RESH);
    }
}

void DNC_RESH_CTL_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_RESH_CTL].step) {
        case SINGLE_TAP:
            unregister_code16(IL_RESH);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LCTL);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(IL_RESH);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(IL_RESH);
            break;
    }
    dance_state[DNC_RESH_CTL].step = 0;
}

// new dance
void on_DNC_7H_LSQB(qk_tap_dance_state_t *state, void *user_data);
void DNC_7H_LSQB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_7H_LSQB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_7H_LSQB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if (state->count > 3) {
        tap_code16(KC_7);
    }
}

void DNC_7H_LSQB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_7H_LSQB].step = dance_step(state);
    switch (dance_state[DNC_7H_LSQB].step) {
        case SINGLE_TAP:
            register_code16(KC_7);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LBRC);
            break;
        case DOUBLE_TAP:
            register_code16(KC_7);
            register_code16(KC_7);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_7);
            register_code16(KC_7);
    }
}

void DNC_7H_LSQB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_7H_LSQB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_7);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LBRC);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_7);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_7);
            break;
    }
    dance_state[DNC_7H_LSQB].step = 0;
}

void on_DNC_8H_RSQB(qk_tap_dance_state_t *state, void *user_data);
void DNC_8H_RSQB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_8H_RSQB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_8H_RSQB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if (state->count > 3) {
        tap_code16(KC_8);
    }
}

void DNC_8H_RSQB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_8H_RSQB].step = dance_step(state);
    switch (dance_state[DNC_8H_RSQB].step) {
        case SINGLE_TAP:
            register_code16(KC_8);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RBRC);
            break;
        case DOUBLE_TAP:
            register_code16(KC_8);
            register_code16(KC_8);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_8);
            register_code16(KC_8);
    }
}

void DNC_8H_RSQB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_8H_RSQB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_8);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RBRC);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_8);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_8);
            break;
    }
    dance_state[DNC_8H_RSQB].step = 0;
}

// new dance
void on_DNC_1H_LCRB(qk_tap_dance_state_t *state, void *user_data);
void DNC_1H_LCRB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_1H_LCRB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_1H_LCRB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if (state->count > 3) {
        tap_code16(KC_1);
    }
}

void DNC_1H_LCRB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_1H_LCRB].step = dance_step(state);
    switch (dance_state[DNC_1H_LCRB].step) {
        case SINGLE_TAP:
            register_code16(KC_1);
            break;
        case SINGLE_HOLD:
            register_code16(LSFT(KC_LBRC));
            break;
        case DOUBLE_TAP:
            register_code16(KC_1);
            register_code16(KC_1);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_1);
            register_code16(KC_1);
    }
}

void DNC_1H_LCRB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_1H_LCRB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_1);
            break;
        case SINGLE_HOLD:
            unregister_code16(LSFT(KC_LBRC));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_1);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_1);
            break;
    }
    dance_state[DNC_1H_LCRB].step = 0;
}

// new dance
void on_DNC_2H_RCRB(qk_tap_dance_state_t *state, void *user_data);
void DNC_2H_RCRB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_2H_RCRB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_2H_RCRB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if (state->count > 3) {
        tap_code16(KC_2);
    }
}

void DNC_2H_RCRB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_2H_RCRB].step = dance_step(state);
    switch (dance_state[DNC_2H_RCRB].step) {
        case SINGLE_TAP:
            register_code16(KC_2);
            break;
        case SINGLE_HOLD:
            register_code16(LSFT(KC_RBRC));
            break;
        case DOUBLE_TAP:
            register_code16(KC_2);
            register_code16(KC_2);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_2);
            register_code16(KC_2);
    }
}

void DNC_2H_RCRB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_2H_RCRB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_2);
            break;
        case SINGLE_HOLD:
            unregister_code16(LSFT(KC_RBRC));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_2);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_2);
            break;
    }
    dance_state[DNC_2H_RCRB].step = 0;
}

// new dance

void on_DNC_F_CTRLM(qk_tap_dance_state_t *state, void *user_data);
void DNC_F_CTRLM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_F_CTRLM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_F_CTRLM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if (state->count > 3) {
        tap_code16(KC_F);
    }
}

void DNC_F_CTRLM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_F_CTRLM].step = dance_step(state);
    switch (dance_state[DNC_F_CTRLM].step) {
        case SINGLE_TAP:
            register_code16(KC_F);
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_M));
            break;
        case DOUBLE_TAP:
            register_code16(KC_F);
            register_code16(KC_F);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_F);
            register_code16(KC_F);
    }
}

void DNC_F_CTRLM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_F_CTRLM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_F);
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_M));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_F);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_F);
            break;
    }
    dance_state[DNC_F_CTRLM].step = 0;
}

// new dance
void on_DNC_J_CTRLM(qk_tap_dance_state_t *state, void *user_data);
void DNC_J_CTRLM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_J_CTRLM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_J_CTRLM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_J);
        tap_code16(KC_J);
        tap_code16(KC_J);
    }
    if (state->count > 3) {
        tap_code16(KC_J);
    }
}

void DNC_J_CTRLM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_J_CTRLM].step = dance_step(state);
    switch (dance_state[DNC_J_CTRLM].step) {
        case SINGLE_TAP:
            register_code16(KC_J);
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_M));
            break;
        case DOUBLE_TAP:
            register_code16(KC_J);
            register_code16(KC_J);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_J);
            register_code16(KC_J);
    }
}

void DNC_J_CTRLM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_J_CTRLM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_J);
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_M));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_J);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_J);
            break;
    }
    dance_state[DNC_J_CTRLM].step = 0;
}

// new dance
void on_DNC_D_ALTM(qk_tap_dance_state_t *state, void *user_data);
void DNC_D_ALTM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_D_ALTM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_D_ALTM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_D);
        tap_code16(KC_D);
        tap_code16(KC_D);
    }
    if (state->count > 3) {
        tap_code16(KC_D);
    }
}

void DNC_D_ALTM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_D_ALTM].step = dance_step(state);
    switch (dance_state[DNC_D_ALTM].step) {
        case SINGLE_TAP:
            register_code16(KC_D);
            break;
        case SINGLE_HOLD:
            register_code16(LALT(KC_M));
            break;
        case DOUBLE_TAP:
            register_code16(KC_D);
            register_code16(KC_D);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_D);
            register_code16(KC_D);
    }
}

void DNC_D_ALTM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_D_ALTM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_D);
            break;
        case SINGLE_HOLD:
            unregister_code16(LALT(KC_M));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_D);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_D);
            break;
    }
    dance_state[DNC_D_ALTM].step = 0;
}

// new dance
void on_DNC_K_ALTM(qk_tap_dance_state_t *state, void *user_data);
void DNC_K_ALTM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_K_ALTM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_K_ALTM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_K);
        tap_code16(KC_K);
        tap_code16(KC_K);
    }
    if (state->count > 3) {
        tap_code16(KC_K);
    }
}

void DNC_K_ALTM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_K_ALTM].step = dance_step(state);
    switch (dance_state[DNC_K_ALTM].step) {
        case SINGLE_TAP:
            register_code16(KC_K);
            break;
        case SINGLE_HOLD:
            register_code16(LALT(KC_M));
            break;
        case DOUBLE_TAP:
            register_code16(KC_K);
            register_code16(KC_K);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_K);
            register_code16(KC_K);
    }
}

void DNC_K_ALTM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_K_ALTM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_K);
            break;
        case SINGLE_HOLD:
            unregister_code16(LALT(KC_M));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_K);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_K);
            break;
    }
    dance_state[DNC_K_ALTM].step = 0;
}

// new dance

void on_DNC_PLS_CTRLM(qk_tap_dance_state_t *state, void *user_data);
void DNC_PLS_CTRLM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_PLS_CTRLM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_PLS_CTRLM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LSFT(KC_EQUAL));
        tap_code16(LSFT(KC_EQUAL));
        tap_code16(LSFT(KC_EQUAL));
    }
    if (state->count > 3) {
        tap_code16(LSFT(KC_EQUAL));
    }
}

void DNC_PLS_CTRLM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_PLS_CTRLM].step = dance_step(state);
    switch (dance_state[DNC_PLS_CTRLM].step) {
        case SINGLE_TAP:
            register_code16(LSFT(KC_EQUAL));
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_M));
            break;
        case DOUBLE_TAP:
            register_code16(LSFT(KC_EQUAL));
            register_code16(LSFT(KC_EQUAL));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LSFT(KC_EQUAL));
            register_code16(LSFT(KC_EQUAL));
    }
}

void DNC_PLS_CTRLM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_PLS_CTRLM].step) {
        case SINGLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_M));
            break;
        case DOUBLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
    }
    dance_state[DNC_PLS_CTRLM].step = 0;
}

// new dance
void on_DNC_EQL_ALTM(qk_tap_dance_state_t *state, void *user_data);
void DNC_EQL_ALTM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_EQL_ALTM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_EQL_ALTM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
    }
    if (state->count > 3) {
        tap_code16(KC_EQUAL);
    }
}

void DNC_EQL_ALTM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_EQL_ALTM].step = dance_step(state);
    switch (dance_state[DNC_EQL_ALTM].step) {
        case SINGLE_TAP:
            register_code16(KC_EQUAL);
            break;
        case SINGLE_HOLD:
            register_code16(LALT(KC_M));
            break;
        case DOUBLE_TAP:
            register_code16(KC_EQUAL);
            register_code16(KC_EQUAL);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_EQUAL);
            register_code16(KC_EQUAL);
    }
}

void DNC_EQL_ALTM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_EQL_ALTM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_EQUAL);
            break;
        case SINGLE_HOLD:
            unregister_code16(LALT(KC_M));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_EQUAL);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_EQUAL);
            break;
    }
    dance_state[DNC_EQL_ALTM].step = 0;
}

// new dance
void on_DNC_4_CTRLM(qk_tap_dance_state_t *state, void *user_data);
void DNC_4_CTRLM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_4_CTRLM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_4_CTRLM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if (state->count > 3) {
        tap_code16(KC_4);
    }
}

void DNC_4_CTRLM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_4_CTRLM].step = dance_step(state);
    switch (dance_state[DNC_4_CTRLM].step) {
        case SINGLE_TAP:
            register_code16(KC_4);
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_M));
            break;
        case DOUBLE_TAP:
            register_code16(KC_4);
            register_code16(KC_4);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_4);
            register_code16(KC_4);
    }
}

void DNC_4_CTRLM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_4_CTRLM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_4);
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_M));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_4);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_4);
            break;
    }
    dance_state[DNC_4_CTRLM].step = 0;
}
// new dance
void on_DNC_5_ALTM(qk_tap_dance_state_t *state, void *user_data);
void DNC_5_ALTM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_5_ALTM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_5_ALTM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if (state->count > 3) {
        tap_code16(KC_5);
    }
}

void DNC_5_ALTM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_5_ALTM].step = dance_step(state);
    switch (dance_state[DNC_5_ALTM].step) {
        case SINGLE_TAP:
            register_code16(KC_5);
            break;
        case SINGLE_HOLD:
            register_code16(LALT(KC_M));
            break;
        case DOUBLE_TAP:
            register_code16(KC_5);
            register_code16(KC_5);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_5);
            register_code16(KC_5);
    }
}

void DNC_5_ALTM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_5_ALTM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_5);
            break;
        case SINGLE_HOLD:
            unregister_code16(LALT(KC_M));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_5);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_5);
            break;
    }
    dance_state[DNC_5_ALTM].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    // Hebrew ending letters
    [DNC_NUN]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_NUN, DNC_NUN_finished, DNC_NUN_reset),
    [DNC_TSDI] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_TSDI, DNC_TSDI_finished, DNC_TSDI_reset),
    [DNC_KAF]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_KAF, DNC_KAF_finished, DNC_KAF_reset),
    [DNC_MEM]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_MEM, DNC_MEM_finished, DNC_MEM_reset),
    [DNC_PE]   = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_PE, DNC_PE_finished, DNC_PE_reset),
    // Macros
    [DNC_PRT_SCRN] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_PRT_SCRN, DNC_PRT_SCRN_finished, DNC_PRT_SCRN_reset),
    [DNC_COPY_CUT] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_COPY_CUT, DNC_COPY_CUT_finished, DNC_COPY_CUT_reset),
    // Base layer tap-hold
    [DNC_PLUS_CTL] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_PLUS_CTL, DNC_PLUS_CTL_finished, DNC_PLUS_CTL_reset),

    // Numbers tap-hold
    [DNC_7_LSQB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_7_LSQB, DNC_7_LSQB_finished, DNC_7_LSQB_reset),
    [DNC_8_RSQB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_8_RSQB, DNC_8_RSQB_finished, DNC_8_RSQB_reset),
    [DNC_2_RCRB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_2_RCRB, DNC_2_RCRB_finished, DNC_2_RCRB_reset),
    [DNC_1_LCRB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_1_LCRB, DNC_1_LCRB_finished, DNC_1_LCRB_reset),

    // hebrew modifiers right
    [DNC_LAMD_CTL] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_LAMD_CTL, DNC_LAMD_CTL_finished, DNC_LAMD_CTL_reset),
    [DNC_YOD_ALT]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_YOD_ALT, DNC_YOD_ALT_finished, DNC_YOD_ALT_reset),
    // hebrew modifiers left
    [DNC_VAV_ALT]     = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_VAV_ALT, DNC_VAV_ALT_finished, DNC_VAV_ALT_reset),
    [DNC_RESH_CTL]    = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_RESH_CTL, DNC_RESH_CTL_finished, DNC_RESH_CTL_reset),
    [DNC_ESC_HEB_GUI] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_ESC_HEB_GUI, DNC_ESC_HEB_GUI_finished, DNC_ESC_HEB_GUI_reset),

    // Hebrew Numbers tap-hold
    [DNC_7H_LSQB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_7H_LSQB, DNC_7H_LSQB_finished, DNC_7H_LSQB_reset),
    [DNC_8H_RSQB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_8H_RSQB, DNC_8H_RSQB_finished, DNC_8H_RSQB_reset),

    [DNC_1H_LCRB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_1H_LCRB, DNC_1H_LCRB_finished, DNC_1H_LCRB_reset),
    [DNC_2H_RCRB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_2H_RCRB, DNC_2H_RCRB_finished, DNC_2H_RCRB_reset),

    // LyX speciel modifiers - letters
    [DNC_F_CTRLM] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_F_CTRLM, DNC_F_CTRLM_finished, DNC_F_CTRLM_reset),
    [DNC_J_CTRLM] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_J_CTRLM, DNC_J_CTRLM_finished, DNC_J_CTRLM_reset),
    [DNC_D_ALTM]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_D_ALTM, DNC_D_ALTM_finished, DNC_D_ALTM_reset),
    [DNC_K_ALTM]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_K_ALTM, DNC_K_ALTM_finished, DNC_K_ALTM_reset),
    // LyX speciel modifiers - numbers & symbols
    [DNC_4_CTRLM]   = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_4_CTRLM, DNC_4_CTRLM_finished, DNC_4_CTRLM_reset),
    [DNC_PLS_CTRLM] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_PLS_CTRLM, DNC_PLS_CTRLM_finished, DNC_PLS_CTRLM_reset),
    [DNC_5_ALTM]    = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_5_ALTM, DNC_5_ALTM_finished, DNC_5_ALTM_reset),
    [DNC_EQL_ALTM]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_EQL_ALTM, DNC_EQL_ALTM_finished, DNC_EQL_ALTM_reset),

};
