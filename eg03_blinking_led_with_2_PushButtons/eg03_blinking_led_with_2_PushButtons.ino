// Example 03 : Blinking Led with 2 Push Buttons ....

const int LED = 13;            // Led Pin
const int PUSH_BUTTON1 = 3;     // Push button Pin to start
const int PUSH_BUTTON2 = 2;     // Push button Pin to stop
int val_start;
int val_stop;

void setup() {
  // put your setup code here, to run once:
pinMode (LED,OUTPUT);
pinMode (PUSH_BUTTON1,INPUT);
pinMode (PUSH_BUTTON2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val_start = digitalRead (PUSH_BUTTON1);
val_stop = digitalRead (PUSH_BUTTON2);

if (val_start == 1){ 
  digitalWrite (LED,HIGH);
  
}else if (val_stop == 1){
  digitalWrite (LED,LOW);

}
}
