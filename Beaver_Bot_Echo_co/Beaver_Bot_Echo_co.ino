#define RMB 2
#define RMA 6
#define LMA 3
#define LMB 7


void setup() {
  pinMode(RMB, OUTPUT);
  pinMode(RMA, OUTPUT);
  pinMode(LMA, OUTPUT);
  pinMode(LMB, OUTPUT);
  pinMode(4, OUTPUT);
  analogWrite(4, HIGH);
  Serial.begin(9600);
}

void loop() {
  int Sensor = analogRead(4);
  delay(500);
  if (Sensor < 500) {
    digitalWrite(RMB, LOW);
    digitalWrite(RMA, LOW);
    digitalWrite(LMA, LOW);
    digitalWrite(LMB, LOW);
  } else {
    drive_Forward();
  }
}

int drive_Forward() {  //The function for driving the bot forward
  digitalWrite(RMB, HIGH);
  digitalWrite(RMA, LOW);
  digitalWrite(LMA, HIGH);
  digitalWrite(LMB, LOW);
}

int drive_Backwards() {  //The function for driving the bot backwards
  digitalWrite(RMB, LOW);
  digitalWrite(RMA, HIGH);
  digitalWrite(LMA, LOW);
  digitalWrite(LMB, HIGH);
}

int drive_Right() {  //The function for turning the bot right
  digitalWrite(RMB, HIGH);
  digitalWrite(RMA, LOW);
  digitalWrite(LMA, LOW);
  digitalWrite(LMB, LOW);
}

int drive_Left() {  //The function for turning the bot left
  digitalWrite(RMB, LOW);
  digitalWrite(RMA, LOW);
  digitalWrite(LMA, HIGH);
  digitalWrite(LMB, LOW);
}
