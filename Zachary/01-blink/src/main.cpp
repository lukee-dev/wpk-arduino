#include <Arduino.h>

void Blysk(int czas) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(czas);

    digitalWrite(LED_BUILTIN, LOW);
    delay(200);}




void czekaj() {
    digitalWrite(LED_BUILTIN, LOW);
    delay(3000);
}
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(2, INPUT);


}

void loop() {

    int Klik = digitalRead(2);


    for (int numer = 0; numer < 3; numer++) {
   Blysk(200);
}

    for (int numer = 0; numer < 3; numer++) {
   Blysk(1000);
}

   for (int numer = 0; numer < 3; numer++) {
  Blysk(200);
}
   
    czekaj();}
