``` c++

const int LED =13;
const int Button =7;

int button_state=0;
int LED_state=0;

void setup(){
pinMode(LED,OUTPUT);
pinMode(Button,IMPUT):
}

void loop(){
button_state=digitalRead(Button);

if(button_state==HIGH)
{
  LED_state = 1 - LED_state;
}

if(LED_state == 1)

{
  digitalWrite(LED,HIGH);
}
else 
{ digitalWrite(LED,LOW);
}
}
```
