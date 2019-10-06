```
const int LED = 9;    // pin for the LED
const int Button = 7; // input pin for the pushbutton
int val;              // stores the state of the input pin
int old_val;          // stores the previous value of "val"
int state;            // 0 = LED off while 1 = LED on
int brightness =128;  // stores the brightness value
unsigned long startTime;  // when did we begin pressing the button
int buttonHeldTime=500;   // if button is held for more than 500ms 
int maxVal = 255;         // max brightness of 255

void setup(){
  pinMode(LED,OUTPUT);  // tell arduino LED is an output
  pinMode(Button,INPUT);  // tell arduino Button is an input
}

void loop(){
  val=digitalRead(Button);          // check if there was a transition
  if((val==HIGH)&&(old_val==LOW)){  
    state=1 -state;                 // change the state from off to on or vice-versa 
    startTime=millis();             // millis() is the arduino clock, it returns how many miliseconds have passed since the board has been reset
    delay(10);                      
  }
  if((val==HIGH)&&(old_val==HIGH)){                         // check whether the button is being held down
    if(state==1 && (millis()-startTime)>buttonHeldTime){     // if the button is held for more than 500ms.
      brightness++;                                         // increment brigthness by 1
      delay(10);                                            // delay to avoid brighntess going up too fast
      if(brightness>maxVal){                                  // 255 is the max brightness
        brightness =0;                                      // if we go over 255 let's g0 back to 0
      }
    }
  }
  old_val=val;                      // val is now old, let''s store it
  if(state==1){
    analogWrite(LED,brightness);    // turn on LED at the current brightness
  }else{
    analogWrite(LED,0);             // LED turned off
  }
}
```
