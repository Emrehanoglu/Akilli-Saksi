#define su A0
#define uyari 7

int islaklik; 
void setup() {
  pinMode(su,INPUT);
  pinMode(uyari,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  islaklik = analogRead(su);
  Serial.println(islaklik);
  delay(200);
  if(islaklik < 250){
    digitalWrite(uyari,LOW);
  }
  else{
    digitalWrite(uyari,HIGH);
  }
}
