Modified 11 Sept 2019
by: Subaash Nair

const int LED = 13;
const int Button = 7;
int val = 0;

void setup(){ //setup function

  pinMode(LED,OUTPUT); //function and arguments
  pinMode(Button,INPUT); //function and arguments

}

void loop(){ //loop function
  val = digitalRead(INPUT); //creating new variable val by adding the parameter (digitalRead) with argument (INPUT)
                          // read input value and store it
  //check whether the input is HIGH when the button is pressed
  if(val == HIGH){
    digitalWrite(LED,HIGH); //turn LED ON
  }
  else 
  {
   digitalWrite(LED,LOW); //LED off
  }

}
