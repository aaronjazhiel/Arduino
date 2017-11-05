int milivolts;
void setup() {
  Serial.begin(9600);
}

void loop() {

  milivolts = map(analogRead(0),0,1023,0,5000);

   Serial.println(milivolts/);

}
