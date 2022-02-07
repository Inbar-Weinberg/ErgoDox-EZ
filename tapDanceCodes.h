enum tap_dance_codes {
    // heb endings
    DNC_NUN,   // 0
    DNC_TSDI,  // 1
    DNC_KAF,   // 2
    DNC_MEM,   // 3
    DNC_PE,    // 4

    // macros
    DNC_PRT_SCRN,  // 5
    DNC_COPY_CUT,  // 6

    // num layer
    DNC_PLUS_CTL,  // 10  hebrew and english

    // English []{}
    DNC_7_LSQB,  // 11
    DNC_8_RSQB,  // 12
    DNC_2_RCRB,  // 14
    DNC_1_LCRB,  // 15

    // hebrew modifiers right
    DNC_QOF_GUI,
    DNC_YOD_ALT,   // 17
    DNC_LAMD_CTL,  // 18
    DNC_ESC_HEB_GUI,

    // hebrew modifiers left
    DNC_VAV_ALT,   // 19
    DNC_RESH_CTL,  // 16

    // Hebrew []{}
    DNC_7H_LSQB,
    DNC_8H_RSQB,
    DNC_1H_LCRB,
    DNC_2H_RCRB,

    // lyx layer
    DNC_F_CTRLM,
    DNC_D_ALTM,
    DNC_J_CTRLM,
    DNC_K_ALTM,

    // lyx numbers
    DNC_PLS_CTRLM,
    DNC_EQL_ALTM,
    DNC_4_CTRLM,
    DNC_5_ALTM,

    TAP_DANCE_ENUM_LAST,
};
