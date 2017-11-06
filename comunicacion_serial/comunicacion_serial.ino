
String comando;

void setup() {

  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
 
}

void loop() {
}

//Se ejecuta cuando tiene algo que leer en modo serial
void serialEvent(){
   comando = Serial.readString();
   Serial.println(comando);

   if(comando == "rojo"){
     digitalWrite(11,1);
     digitalWrite(9,0);
     digitalWrite(10,0); 
   }
   
   if(comando == "azul"){
     digitalWrite(11,0);
     digitalWrite(9,1);
     digitalWrite(10,0); 
   }
   
   if(comando == "verde"){
     digitalWrite(11,0);
     digitalWrite(9,0);
     digitalWrite(10,1); 
   }
}

