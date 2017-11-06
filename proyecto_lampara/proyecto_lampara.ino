
int luz;

void setup() {
   pinMode(4, INPUT);    //13 PIR de movimiento
   pinMode(8, OUTPUT);   //8 relevador
   Serial.begin(9600);
}

void loop() {

digitalWrite(13,digitalRead(4));

 
if( analogRead(0) > 650){// si no a luz
  
     if(digitalRead(4) == 1){
        digitalWrite(8,LOW); 
     }else{
       digitalWrite(8,HIGH);
     }
 }
}
