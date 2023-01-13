const int strobe = 8;
void setup() {
pinMode(strobe, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(strobe,HIGH);
delay(1000);
digitalWrite(strobe, LOW);
delay(100);
}
