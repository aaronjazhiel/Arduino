/*
 * Nombre : Aaron Jazhiel Delgado Gonzalez
 * Fecha:10-25-2017
 * Descripción: Practica 1 Hola mundo
 */

void setup() {
  // Con esta instruccion podemos settear la velocidad Serial 
   Serial.begin(9600);
}
void loop() {
  // Mediante esta instruccion se imprime en el monitor serial y se espera un segundo en imprimir
  Serial.println("hola mundo");
  delay(1000);    
}
