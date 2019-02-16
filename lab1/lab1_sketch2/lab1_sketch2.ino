void dimmer(int freq, int duty)
{
  int period, onTime, offTime;

  period = 1000 / freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);

}

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}
bool countDown = true;
bool countDownFreq = true;
int freq = 100;
int duty = 100;


void loop() {
  // put your main code here, to run repeatedly:
  dimmer(freq, duty);

  if (countDown)
  {
    duty -= 10;
    freq -= 10;
  }
  else {
    duty += 10;
    freq += 10;
  }


  if (duty == 30)
  {
    countDown = false;
  }

  if (duty == 100) {
    countDown = true;
  }


}
