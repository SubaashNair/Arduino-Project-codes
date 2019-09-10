int led =13;

auto Blink = []() { digitalWrite(led, HIGH);
             delay(1000);
             digitalWrite(led, LOW);
             delay(1000);
};

void setup(){
pinMode(led, OUTPUT);
}

void loop(){
Blink();
}
