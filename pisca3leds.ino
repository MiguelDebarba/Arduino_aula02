void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);
  delay(50);
  digitalWrite(12,LOW);
  delay(50);

  digitalWrite(8,HIGH);
  delay(50);
  digitalWrite(8,LOW);
  delay(50);

  digitalWrite(2,HIGH);
  delay(50);
  digitalWrite(2,LOW);
  delay(50);
}
