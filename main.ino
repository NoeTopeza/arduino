//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  static int potPosition;
  
  potPosition = analogRead(A0);
  digitalWrite(13, HIGH);
  delay(potPosition);
  digitalWrite(13, LOW);
  delay(potPosition);
}
