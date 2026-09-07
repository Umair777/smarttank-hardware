#ifndef DISPLAY_H
#define DISPLAY_H

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

void initDisplay();

void displayStatus(
    int capacity,
    int rssi,
    int batteryPercent,
    bool cloudConnected
);

void displayMotorStatus(bool motorRunning);

void cleanupDisplay();

#endif
