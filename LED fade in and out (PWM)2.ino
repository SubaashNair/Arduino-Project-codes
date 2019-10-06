```
const int LED=9; //
int fadeVal; // variable to store fade value of 0
int minVal; // variable of the minimum value of 0
int maxVal=255; // variable of the maximmum value of 255

void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
for(fadeVal; fadeVal<maxVal; fadeVal++){  ////loop from 0 to 254 (fade in)
  analogWrite(LED,fadeVal);
  delay(10);
}
for(fadeVal; fadeVal>0; fadeVal--){ //// loop from 255 to 1 (fade out)
  analogWrite(LED,fadeVal);
  delay(10);
}
}
```
