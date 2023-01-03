#ifndef DCCTimer_h
#define DCCTimer_h
#include "Arduino.h"
#if defined(ARDUINO_ARCH_RP2040)
#include "pico/stdlib.h"
#endif

typedef void (*INTERRUPT_CALLBACK)();

class DCCTimer {
  public:
  static void begin(INTERRUPT_CALLBACK interrupt);
  static void getSimulatedMacAddress(byte mac[6]);
  static bool isPWMPin(byte pin);
  static void setPWM(byte pin, bool high);
  private:
};

#endif
