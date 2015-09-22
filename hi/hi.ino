int led = 12;

void setup() {
  pinMode(led, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  Serial.print(1002);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
