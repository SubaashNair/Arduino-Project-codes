static const int led=13;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void blink(){
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
blink();
}
