//
//    FILE: runningAverageTest.pde
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.01
//    DATE: 2012-12-30
//
// PUPROSE: show working of runningAverage
//

#include "RunningAverageGozzi.h"

  RunningAverage myRA(4  );
int samples = 0;

void setup(void) 
{
  Serial.begin(115200);
  Serial.println("Demo RunningAverage lib");
  Serial.print("Version: ");
  Serial.println(RUNNINGAVERAGE_LIB_VERSION);
  myRA.clear(); // explicitly start clean
  for (int i=1;  i<=20;i++){
    long rn = random(0, 100);
    myRA.addValue(rn);
    Serial.print(i); Serial.print(")   Val=");  Serial.print(rn);
    Serial.print("   Avr=");  Serial.print(myRA.getAverage());
    Serial.print("   Min=");  Serial.print(myRA.getMin());
     Serial.print("   Max=");  Serial.println(myRA.getMax());
    
    }
}

void loop(void) 
{
  
}