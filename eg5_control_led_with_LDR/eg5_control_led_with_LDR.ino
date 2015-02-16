const int lightpin = A0;
const int ledpin = 9;
int lightlevel;

void setup() {
  // put your setup code here, to run once:

pinMode(ledpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lightlevel = analogRead(lightpin);
lightlevel = map(lightlevel,0,900,0,255);
lightlevel = constrain(lightlevel,0,255);
analogWrite(ledpin,lightlevel);
}
