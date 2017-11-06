void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {

if(digitalRead(2)== 0){

  Serial.println("no  hay nada");
}else{
  Serial.println("hay algo presente");

}

}
