/*
 * Nombre : Aaron Jazhiel Delgado Gonzalez
 * Fecha:10-25-2017
 * Descripción: Manejo de las variables de arduino.
 */

byte numero = 0;

void setup() {

  //Funcion que indica la velocidad de comunicación serial.
  Serial.begin(9600);
  //Funcion que indica la confuguracion de entrada de los pines 2 Y 3
  
  pinMode(2,INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
   //Funcion digitalRead(2) que testea el pin 2 que se ah igual 0 cada vez que persive un valor.
   //Cada que se oprime el boton la variable se incrementa en '1'
  if(digitalRead(2) == LOW ){
    numero = numero +1;
     Serial.println(numero);
     delay(200);
  }

   //Funcion digitalRead(3) que testea el pin 3 que se ah igual 0 cada vez que persive un valor.
   //Cada que se oprime el boton la variable se decrementa en '1'

    if(digitalRead(3) == LOW ){
    numero = numero - 1;
     Serial.println(numero);
     delay(200);
  }


}
