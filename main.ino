//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2000);
}
