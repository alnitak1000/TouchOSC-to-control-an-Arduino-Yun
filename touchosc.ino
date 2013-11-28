#include <Bridge.h>

char D13value[3];

void setup() {
  pinMode(12,OUTPUT);
  Bridge.begin();
}

void loop() {
  Bridge.get("D13",D13value,3);
  int D13int = atoi(D13value);
  analogWrite(13,D13int);
  delay(10);  
}
