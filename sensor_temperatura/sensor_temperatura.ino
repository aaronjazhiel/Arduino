int milivolts;
void setup() {
  Serial.begin(9600);
}

void loop() {
// recordemos ponerlo en un pin analogico
  milivolts = map(analogRead(0),0,1023,0,5000);
// Se divide entre 10 por la especificacion del sensor

   Serial.println(milivolts/10);

}
