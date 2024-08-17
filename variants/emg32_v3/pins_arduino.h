#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

/*
#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       18
*/

#define PIN_NEOPIXEL        35
#define NEOPIXEL_NUM        1     // number of neopixels

// EMG32 SDMMC
#define EMG32_SDMMC_DAT_0                           14
#define EMG32_SDMMC_DAT_1                           21
#define EMG32_SDMMC_DAT_2                           10
#define EMG32_SDMMC_DAT_3                           11
#define EMG32_SDMMC_CLK                             13
#define EMG32_SDMMC_CMD                             12
#define EMG32_SDMMC_MICROSD_DET                      9
#define EMG32_SDMMC_MICROSD_PWEN                    38

// EMG32 CAN
#define EMG32_CAN_RX                                 2
#define EMG32_CAN_TX                                 1
#define EMG32_CAN_S                                 37

// EMG32 ADS7028
#define EMG32_PIN_SCK                                41     // CLK
#define EMG32_PIN_MOSI                               42
#define EMG32_PIN_MISO                               40
#define EMG32_PIN_SS                                 39     // CS_ADC

/*
#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)
*/

static const uint8_t TX = 43;
static const uint8_t RX = 44;
#define TX1 TX
#define RX1 RX

/* TODO: consolidate overlap */
static const uint8_t SDA = 15;
static const uint8_t SCL = 7;
static const uint8_t SDA2 = 6;
static const uint8_t SCL2 = 5;

static const uint8_t SS    = 39;
static const uint8_t MOSI  = 42;
static const uint8_t MISO  = 40;
static const uint8_t SCK   = 41;

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;
static const uint8_t A6 = 7;
static const uint8_t A7 = 8;
static const uint8_t A8 = 9;
static const uint8_t A9 = 10;
static const uint8_t A10 = 11;
static const uint8_t A11 = 12;
static const uint8_t A12 = 13;
static const uint8_t A13 = 14;
static const uint8_t A14 = 15;
static const uint8_t A15 = 16;
static const uint8_t A16 = 17;
static const uint8_t A17 = 18;

static const uint8_t T1 = 1;
static const uint8_t T2 = 2;
static const uint8_t T3 = 3;
static const uint8_t T4 = 4;
static const uint8_t T5 = 5;
static const uint8_t T6 = 6;
static const uint8_t T7 = 7;
static const uint8_t T8 = 8;
static const uint8_t T9 = 9;
static const uint8_t T10 = 10;
static const uint8_t T11 = 11;
static const uint8_t T12 = 12;
static const uint8_t T13 = 13;
static const uint8_t T14 = 14;

#endif /* Pins_Arduino_h */