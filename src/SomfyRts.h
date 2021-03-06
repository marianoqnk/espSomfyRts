#ifndef somfyrts_h
#define somfyrts_h
#include <Arduino.h>
#include <EEPROM.h>

#define SYMBOL 640
#define HAUT 0x2
#define STOP 0x1
#define BAS 0x4
#define PROG 0x8
#define EEPROM_ADDRESS 0

#define REMOTE 0x121300    //<-- Change it!

uint16_t newRollingCode = 101;       //<-- Change it!
uint16_t rollingCode = 0;
unsigned char frame[7];
char checksum;

class SomfyRts {
    bool _debug;
    uint8_t _tx_pin;

    void init();

  public:
    SomfyRts(bool debug, uint8_t tx_pin) {
      _debug = debug;
      _tx_pin = tx_pin;
      init();
    };

    // void buildFrame(unsigned char *frame, unsigned char button);
    // void sendCommand(unsigned char *frame, unsigned char sync);
};

#endif
