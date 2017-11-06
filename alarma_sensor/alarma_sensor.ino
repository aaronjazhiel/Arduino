void setup() {
  pinMode(2, INPUT );//QRD 1 no hay objeto  0 si hay objeto
  pinMode(8, OUTPUT);//el pin 8 es del relevador HIGH alarma apagada
  digitalWrite(8,1);// Alarma apagada
}

void loop() {

  if(digitalRead(2) == 1)//si no hay objeto
   digitalWrite(8, 0); // Alarma prendida
  else
   digitalWrite(8, 1);// Alarma apagada
  
   
}
