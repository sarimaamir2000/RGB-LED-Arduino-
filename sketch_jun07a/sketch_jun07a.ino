void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for(int i=0;i<10;i++)
  digitalWrite(LED_BUILTIN,HIGH); //TURN THE LED ON (HIGH IS THE VOLTAGE LEVEL)
  delay(1000); //wait for this amount of seconds
  digitalWrite(LED_BUILTIN,LOW); //turn the led off by making the voltage low
  delay(1000); //wait for this amount of seconds
  
  // put your main code here, to run repeatedly:

}
