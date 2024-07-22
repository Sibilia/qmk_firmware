#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define OLED_TIMEOUT 300000
#define OLED_BRIGHTNESS 120

#define MASTER_LEFT

// #define ENCODER_DIRECTION_FLIP

/////////////////////////////////////////////////////////////////////
// RGB Configuration
// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN D3

#ifdef RGB_MATRIX_ENABLE
  #define RGBLED_NUM 58
  #define SPLIT_TRANSPORT_MIRROR

  #define RGB_MATRIX_SPLIT { 29, 29 }
  #define DRIVER_LED_TOTAL RGBLED_NUM

  // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
  #define RGB_MATRIX_LED_PROCESS_LIMIT 12

  // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
  #define RGB_MATRIX_LED_FLUSH_LIMIT 16

  // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
  #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
  #define RGB_MATRIX_HUE_STEP 8
  #define RGB_MATRIX_SAT_STEP 8
  #define RGB_MATRIX_VAL_STEP 8
  #define RGB_MATRIX_SPD_STEP 8

  #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_UP_DOWN

  // RGB animations. Disable the animations you don't want/need.
  // #define ENABLE_RGB_MATRIX_ALPHAS_MODS
  // #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
  // #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
  // #define ENABLE_RGB_MATRIX_BREATHING
  // #define ENABLE_RGB_MATRIX_BAND_SAT
  // #define ENABLE_RGB_MATRIX_BAND_VAL
  // #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
  // #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
  // #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
  // #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
  // #define ENABLE_RGB_MATRIX_CYCLE_ALL
  // #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
  #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
  // #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
  // #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
  // #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
  // #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
  #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
  // #define ENABLE_RGB_MATRIX_DUAL_BEACON
  #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
  // #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
  #define ENABLE_RGB_MATRIX_RAINDROPS
  #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
  // #define ENABLE_RGB_MATRIX_HUE_BREATHING
  // #define ENABLE_RGB_MATRIX_HUE_PENDULUM
  // #define ENABLE_RGB_MATRIX_HUE_WAVE
  #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
  #define ENABLE_RGB_MATRIX_PIXEL_FLOW
  #define ENABLE_RGB_MATRIX_PIXEL_RAIN
#endif
