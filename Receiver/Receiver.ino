#define laserreceiver 4
#define buzzer 3
void setup() {
pinMode(laserreceiver,INPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {
  
if(digitalRead(laserreceiver)==HIGH){
  
Serial.println("Ada Kapal yang Mendekat");

tone(buzzer, 400); //gelombang suara sebesar 400 Hz

delay(1000); //Suara tersebut selama 1 detik  

noTone(buzzer); //Suara akan berhenti

delay(1000); //Berhenti selama 1 detik

  }
  else{
    
Serial.println("Tidak ada Kapal yang Mendekat");
  
    }
}
