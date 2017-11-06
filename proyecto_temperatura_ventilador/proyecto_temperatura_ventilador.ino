int lectura ;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);//NA c apagado LOW es prendido
  
}

void loop() {
  lectura = map(analogRead(0),0, 1023,0,5000);
  lectura = lectura/10;
  // Hasta este momento ya se encuentra convertido en 
  //grandes centigrados  <>

  if(lectura >30){
   digitalWrite(8, LOW);   
  }else{
   digitalWrite(8, HIGH);   
  }
  Serial.println(lectura);
  
}
