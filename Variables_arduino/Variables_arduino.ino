/*
 * Nombre : Aaron Jazhiel Delgado Gonzalez
 * Fecha:10-25-2017
 * Descripción: Manejo de las variables de arduino.
 */

byte numero = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() {

  if(digitalRead(2) == LOW ){
    numero = numero +1;
     Serial.println(numero);
     delay(200);
  }

    if(digitalRead(3) == LOW ){
    numero = numero - 1;
     Serial.println(numero);
     delay(200);
  }


}
