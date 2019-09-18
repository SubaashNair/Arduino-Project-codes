```
const int LED = 8;
const int Button =7;

int Button_val = 0;

void setup() {
pinMode(LED,OUTPUT);
pinMode(Button,INPUT);
}

void loop(){
Button_val = digitalRead(Button);

if(Button_val == HIGH){
digitalWrite(LED,HIGH);
}
else
{
digitalWrite(LED,LOW);
}
}
```
