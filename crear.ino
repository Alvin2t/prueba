//Definir variables
//Salida
int let1 = 13;

void setup() {
Serial.begin(9600);
}

//Funcion del let
void loop() {
pinMode(let1, HIGH);
delay(600);
pinMode(let1, LOW);
delay(500);
}