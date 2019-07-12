#define lasertransmitter 4
void setup() {
pinMode(lasertransmitter,OUTPUT);
Serial.begin(9600);
digitalWrite(lasertransmitter,HIGH);
}

void loop() {
}
