#define SEA 2
#define MTA 6
#define ICE 3
#define MTB 7
void setup() {
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(ICE, OUTPUT);
  pinMode(MTB, OUTPUT);
}

void loop() {
  digitalWrite(SEA, HIGH);
  digitalWrite(MTA, LOW);
  digitalWrite(ICE, HIGH);
  digitalWrite(MTB, LOW);
  delay(2000);
  digitalWrite(SEA, LOW);
  digitalWrite(MTA, HIGH);
  digitalWrite(ICE, HIGH);
  digitalWrite(MTB, LOW);
  delay(2000);
}
