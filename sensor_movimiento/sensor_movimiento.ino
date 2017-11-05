void setup() {

   Serial.begin(19600);
   pinMode(2, INPUT);

}
void loop() {

  if(digitalRead(2) == 1){
    Serial.println("hay movimiento");
  }else{
       Serial.println("no hay movimiento");
   }
}
