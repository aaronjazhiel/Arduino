
int lectura;
int luz;

void setup() {
      Serial.begin(9600);
}

void loop() {

// Funcion analogRead es un funcion que lee un pin analogico  y lo convierte en un valor numerico de 0 a 1023 valores(ADC es de 10 bits)
// que corresponde a un valor de 0 a 5 volts

     lectura = analogRead(0);
     luz = map(lectura,450, 910 ,100,0);
     Serial.println(luz);
     delay(100);
 
}
