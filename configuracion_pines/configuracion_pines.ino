/*
 * Nombre : Aaron Jazhiel Delgado Gonzalez
 * Fecha:10-25-2017
 * Descripción: Manejo de pines de entrada y salida
 */
void setup() {
  //pintMode Sirve para configurar un pin digital
  //parametros de entrada son el numero de pin y la constante
  //INPUT = Para entradas digitales en general
  //OUTPUT = Para salidas digitales en general
   pinMode(2,INPUT_PULLUP); // Se establece como entrada
   Serial.begin(9600);// Inicializar la comunicacion serie
}

void loop() {

// La funcion digitalRead sirve obtener el valor del pin con la constante cuando 
// esta presionado obtenemos LOW(O).
//LOW(0) = Bajo HIGH(1) = Alto
   if(digitalRead(2) == LOW){ 
      Serial.println("Iniciando con el internet de las cosas !!!");
      delay(1000);
   }
}
