#pragma once

// Core behavior type definitions
#define ZMK_BEHAVIOR_CORE_adaptive_key    compatible = "zmk,behavior-adaptive-key";    #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_auto_layer      compatible = "zmk,behavior-auto-layer";      #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_caps_word       compatible = "zmk,behavior-caps-word";       #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_dynamic_macro   compatible = "zmk,behavior-dynamic-macro";   #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_hold_tap        compatible = "zmk,behavior-hold-tap";        #binding-cells = <2>
#define ZMK_BEHAVIOR_CORE_key_repeat      compatible = "zmk,behavior-key-repeat";      #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_macro           compatible = "zmk,behavior-macro";           #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_macro_one_param compatible = "zmk,behavior-macro-one-param"; #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_macro_two_param compatible = "zmk,behavior-macro-two-param"; #binding-cells = <2>
#define ZMK_BEHAVIOR_CORE_mod_morph       compatible = "zmk,behavior-mod-morph";       #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_sticky_key      compatible = "zmk,behavior-sticky-key";      #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_tap_dance       compatible = "zmk,behavior-tap-dance";       #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_tri_state       compatible = "zmk,behavior-tri-state";       #binding-cells = <0>

// Core macro to declare behaviors
#define ZMK_BEHAVIOR(name, type, ...) \
    / { \
        behaviors { \
            name: name { \
                ZMK_BEHAVIOR_CORE_ ## type; \
                __VA_ARGS__ \
            }; \
        }; \
    };
