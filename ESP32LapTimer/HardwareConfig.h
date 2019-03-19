#pragma once
void InitHardwarePins();

///Define Pin configuration here, these are the defaults as given on github

#define Default_Pins        // Use for all new hardware and PCBs
//#define Old_Default_Pins
//#define AlessandroDevBoard  // Because Alessandro was silly he has to mess around with a different pin configuration 

// DO NOT CHANGE BELOW UNLESS USING CUSTOM HARDWARE

#define EEPROM_VERSION_NUMBER 5 // Increment when eeprom struct modified

#define MaxNumRecievers 6
byte NumRecievers;

#define MIN_TUNE_TIME 30

#define OLED //uncomment this to enable OLED support

#ifdef Default_Pins
  #define BEEPER 14
  #define USE_VSPI
  
  #define CS1 16
  #define CS2 5
  #define CS3 4
  #define CS4 15
  #define CS5 25
  #define CS6 26
  
  #define ADC1 ADC1_CHANNEL_0
  #define ADC2 ADC1_CHANNEL_3
  #define ADC3 ADC1_CHANNEL_6
  #define ADC4 ADC1_CHANNEL_7
  #define ADC5 ADC1_CHANNEL_4
  #define ADC6 ADC1_CHANNEL_5
  
  #define ADC1_GPIO 36
  #define ADC2_GPIO 39
  #define ADC3_GPIO 34
  #define ADC4_GPIO 35
  #define ADC5_GPIO 32
  #define ADC6_GPIO 33
#endif

#ifdef Old_Default_Pins
  #define BEEPER 14
  #define USE_HSPI
  
  #define SCK 14
  #define MOSI 12
  #define MISO 13
  
  #define CS1 16
  #define CS2 5
  #define CS3 4
  #define CS4 15
  #define CS5 25
  #define CS6 26

  #define ADC1 ADC1_CHANNEL_0
  #define ADC2 ADC1_CHANNEL_6
  #define ADC3 ADC1_CHANNEL_7
  #define ADC4 ADC1_CHANNEL_3
  #define ADC5 ADC1_CHANNEL_4
  #define ADC6 ADC1_CHANNEL_5
  
  #define ADC1_GPIO 36
  #define ADC2_GPIO 34
  #define ADC3_GPIO 35
  #define ADC4_GPIO 39
  #define ADC5_GPIO 32
  #define ADC6_GPIO 33
#endif

#ifdef AlessandroDevBoard
  #define BEEPER 14
  #define USE_HSPI

  #define SCK 14
  #define MOSI 12
  #define MISO 13

  #define CS1 16
  #define CS2 2
  #define CS3 0
  #define CS4 15
  #define CS5 25
  #define CS6 26
  
  #define ADC1 ADC1_CHANNEL_0
  #define ADC2 ADC1_CHANNEL_6
  #define ADC3 ADC1_CHANNEL_7
  #define ADC4 ADC1_CHANNEL_3
  #define ADC5 ADC1_CHANNEL_4
  #define ADC6 ADC1_CHANNEL_5
  
  #define ADC1_GPIO 36
  #define ADC2_GPIO 34
  #define ADC3_GPIO 35
  #define ADC4_GPIO 39
  #define ADC5_GPIO 32
  #define ADC6_GPIO 33
#endif
