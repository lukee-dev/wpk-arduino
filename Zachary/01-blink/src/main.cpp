#include <Arduino.h>

void krotkiBlysk() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);

    digitalWrite(LED_BUILTIN, LOW);
    delay(200);}

void dlogiBlysk() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);

    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
}

void czekaj() {
    digitalWrite(LED_BUILTIN, LOW);
    delay(3000);
}
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

    for (int numer = 0; numer < 3; numer++) {
   krotkiBlysk();
}

for (int numer = 0; numer < 3; numer++) {
dlogiBlysk();
}

   for (int numer = 0; numer < 3; numer++) {
  krotkiBlysk();
}
   
    czekaj();}
