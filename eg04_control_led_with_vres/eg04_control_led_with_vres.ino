const int led = 13;
const int vr = A0;
int sv;


void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sv = analogRead (vr);
digitalWrite(led,HIGH);
delay(sv);
digitalWrite(led,LOW);
delay(sv);
}
