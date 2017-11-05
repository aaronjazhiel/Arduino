void setup() {
  // put your setup code here, to run once:

// Pordefauld estan configurados como salidas se puede o no poner
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
 
}

void loop() {
  // Ejemplo 1
  /* digitalWrite(9, HIGH);
   delay(500);
   digitalWrite(9,LOW);
   delay(500);
  
   digitalWrite(10, HIGH);
   delay(500);
   digitalWrite(10,LOW);
   delay(500);

   digitalWrite(11, HIGH);
   delay(500);
   digitalWrite(11,LOW);
   delay(500);*/
// Ejemplo 2 
// Funcion analogWrite nos permite controlar la intensidad
//de un led o la velocidad de un motor unicamente los pines marcados con guin y la intensidad va de 
//0 a 255 de intensidad y tiene dos argumentos uno es el numero de pines y luego
//va el valor de 0 a 255

for(int i=0;i<=255;i++)
{
  analogWrite(10,i);
  analogWrite(9,255-i);
  delay(10);
}

delay(1000);
   
   
}
