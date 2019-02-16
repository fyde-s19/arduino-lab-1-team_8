// the loop function runs over and over again forever
void timedBlink(int interval) {
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000*interval);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000*interval);                       // wait for a second
}


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  
  // put your main code here, to run repeatedly:
 timedBlink(5);

}
