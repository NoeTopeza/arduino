//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

void setup()
{

}

void loop()
{
  static int potPosition;
  
  potPosition = analogRead(A3);
}
