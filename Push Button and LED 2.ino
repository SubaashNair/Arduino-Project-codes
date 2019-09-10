Modified 11 Sept 2019
By: Subaash Nair

//Set the LED Pin constant globally
//The LED is connected to Pin 8 of the Arduino
#define LEDPin 8
//Connected to one pin of the switch
#define ButtonPin 7

//The setup function runs once you press reset or power the board
void setup() {
  // put your setup code here, to run once:
//initialize the LED Pin as an output  
pinMode(LEDPin,OUTPUT);
// initialize the Button Pin as an input
pinMode(ButtonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(ButtonPin)== 0){
  digitalWrite(LEDPin,1); //turn the LED on (HIGH=1 is the voltage level)
}else{
  digitalWrite(LEDPin,0); //turn the LED off(LOW=0)
}
}
