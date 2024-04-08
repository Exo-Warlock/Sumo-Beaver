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
  int Sensor = analogRead(4);
  delay(500);
  if (Sensor < 500) {
    digitalWrite(SEA, LOW);
    digitalWrite(MTA, LOW);
    digitalWrite(ICE, LOW);
    digitalWrite(MTB, LOW);
  } else {
    digitalWrite(SEA, LOW);
    digitalWrite(MTA, HIGH);
    digitalWrite(ICE, LOW);
    digitalWrite(MTB, HIGH);
  }
}

int drive_Forward() {  //The function for driving the bot forward
  digitalWrite(SEA, HIGH);
  digitalWrite(MTA, LOW);
  digitalWrite(ICE, HIGH);
  digitalWrite(MTB, LOW);
}

int drive_Backwards() {  //The function for driving the bot backwards
  digitalWrite(SEA, LOW);
  digitalWrite(MTA, HIGH);
  digitalWrite(ICE, LOW);
  digitalWrite(MTB, HIGH);
}

int drive_Right() {  //The function for turning the bot right
  digitalWrite(SEA, HIGH);
  digitalWrite(MTA, LOW);
  digitalWrite(ICE, LOW);
  digitalWrite(MTB, LOW);
}

int drive_Left() {   //The function for turning the bot left
  digitalWrite(SEA, LOW);
  digitalWrite(MTA, LOW);
  digitalWrite(ICE, HIGH);
  digitalWrite(MTB, LOW);
}
