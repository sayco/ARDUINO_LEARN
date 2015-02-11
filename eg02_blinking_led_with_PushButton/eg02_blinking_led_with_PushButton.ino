// Example 02 : Blinking Led with Push Button ....

const int LED = 13;            // Led Pin
const int PUSH_BUTTON = 3;     // Push button Pin
int val;

void setup() {
  // put your setup code here, to run once:
pinMode (LED,OUTPUT);
pinMode (PUSH_BUTTON,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead (PUSH_BUTTON);
if (val == 1){ 
  digitalWrite (LED,HIGH);
  delay(1000);

  digitalWrite (LED,LOW);
  delay(1000);
}else{
  digitalWrite (LED,LOW);
  
}
}
