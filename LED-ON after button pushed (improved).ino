```
const int LED = 13; // the pin for the LED
const int BUTTON = 7; // the input pin where the pushbutton is connected

int button_val = 0; // val will be used to store the state of the input pin
int old_button_val = 0; // this variable stores the previous value of "button_val"

int LED_state = 0;  // 0 = LED off and 1 = LED on

void setup() {
pinMode(LED, OUTPUT); // tell Arduino LED is an output
pinMode(BUTTON, INPUT); // and BUTTON is an input
}

void loop(){
button_val = digitalRead(BUTTON); // read input value and store it

// check if there was a transition
if ((button_val == HIGH) && (old_button_val == LOW)){
  LED_state = 1 - LED_state;
}
old_button_val = button_val; // button_val is now old, let's store it

if (LED_state == 1) {
digitalWrite(LED, HIGH); // turn LED ON
} else {
digitalWrite(LED, LOW);
}
}
```
