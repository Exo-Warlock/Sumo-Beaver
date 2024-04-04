#define SEA 2
#define MTA 6
#define ICE 3
#define MTB 7
void setup() {
  pinMode(SEA, OUTPUT);
  pinMode(MTA, OUTPUT);
  pinMode(ICE, OUTPUT);
  pinMode(MTB, OUTPUT);
  pinMode(4, OUTPUT);
  analogWrite(4, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(4));
  delay(500);
  digitalWrite(SEA, HIGH);
  digitalWrite(MTA, LOW);
  digitalWrite(ICE, HIGH);
  digitalWrite(MTB, LOW);
  delay(2000);
  digitalWrite(SEA, LOW);
  digitalWrite(MTA, HIGH);
  digitalWrite(ICE, LOW);
  digitalWrite(MTB, HIGH);
  delay(2000);
}

int drive_Forward() {
  digitalWrite(SEA, HIGH);
  digitalWrite(MTA, LOW);
  digitalWrite(ICE, HIGH);
  digitalWrite(MTB, LOW);
}

int drive_Backwards() {
  digitalWrite(SEA, LOW);
  digitalWrite(MTA, HIGH);
  digitalWrite(ICE, LOW);
  digitalWrite(MTB, HIGH);
}
