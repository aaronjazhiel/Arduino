/*
 * Nombre : Aaron Jazhiel Delgado Gonzalez
 * Fecha:03-11-2017
 * Descripción: Manejo de led con Arduino.
 */
void setup() {

pinMode(9 , OUTPUT);
pinMode(10 , OUTPUT);

}

void loop() {
   //Funcion que establece una senal de salida para el pin 5 volts
   //Recibiendo el numero de Pin y la constante HIGT
    digitalWrite(9 , 1);
    digitalWrite(10 , 0);
    delay(400);
    // Las funciones de digitalWrite se puede manipular el segundo argunmento con un 0 o con 1 dependiendo el estado en el que queremos colocar el pin.
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(400);
}
