/**
 * VÍ DỤ 1-02: ĐIỀU KHIỂN NHIỀU ĐÈN LED
 */
#include <Arduino.h>

const int LED_PINS[] = {2, 4, 5};
const int NUM_LEDS = sizeof(LED_PINS) / sizeof(LED_PINS[0]);

void setup() {
    for (int i = 0; i < NUM_LEDS; i++) {
        pinMode(LED_PINS[i], OUTPUT);
        digitalWrite(LED_PINS[i], LOW);
    }
}

void loop() {
    for (int i = 0; i < NUM_LEDS; i++) {
        digitalWrite(LED_PINS[i], HIGH);
        delay(300);
        digitalWrite(LED_PINS[i], LOW);
    }
}
