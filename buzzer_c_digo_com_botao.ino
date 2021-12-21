#define PinButton 8 
#define buzzer 13 

void setup()
{
pinMode(PinButton, INPUT); // configura D8 como entrada digital
pinMode(buzzer, OUTPUT); // configura D7 como saída digital

delay(100); // atraso de 100 milisegundos
}

void loop() {
if ( digitalRead(PinButton) == HIGH) // se chave = nivel alto
{ 
 for(int x = 2000; x < 4000; x++){
  delay(5);
  tone(buzzer, x);
 } 
}
 if( digitalRead(PinButton) == LOW) {
  noTone(13);
 }
delay(100); // atraso de 100 milisegundos
}
