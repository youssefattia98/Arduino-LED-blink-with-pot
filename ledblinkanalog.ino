/*
 Author: Youssef Attia
 Description: control LED blink rate accroding to readings from pot
*/
#define pot A0
int value;
float volt;
void setup() {
  pinMode(pot, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  value = analogRead(pot);
  digitalWrite(13, 1); //the led only turns on at 1 volt
  delay(value);
  digitalWrite(13, 0);
  delay(value);
}
