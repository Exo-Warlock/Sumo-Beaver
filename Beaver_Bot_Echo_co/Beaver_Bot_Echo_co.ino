#define RMB 2 //B IN2
#define RMA 6 //B IN1
#define LMA 3 //A IN1
#define LMB 7 //A IN2


void setup() {
  pinMode(RMB, OUTPUT);
  pinMode(RMA, OUTPUT);
  pinMode(LMA, OUTPUT);
  pinMode(LMB, OUTPUT);
  pinMode(4, OUTPUT);
  analogWrite(4, HIGH);
  analogWrite(2, HIGH);
  Serial.begin(9600);
}

void loop() {
  int sensor_r = analogRead(2);  //The right sensor goes to the blue wire
  int sensor_l = analogRead(4);  //The left sensor goes to the green wire
 // Serial.println(sensor_l);
  Serial.println(sensor_r);
  if (sensor_r < 500) {
    drive_Backwards();
    delay(3000);
    drive_Left();
    delay(3000);
  } else {
  drive_Forward();
  }
}

int drive_Forward() {  //The function for driving the bot forward
  digitalWrite(RMB, LOW);
  digitalWrite(RMA, HIGH);
  digitalWrite(LMA, HIGH);
  digitalWrite(LMB, LOW);
}

int drive_Backwards() {  //The function for driving the bot backwards
  digitalWrite(RMB, HIGH);
  digitalWrite(RMA, LOW);
  digitalWrite(LMA, LOW);
  digitalWrite(LMB, HIGH);
}

int drive_Right() {  //The function for turning the bot right
  digitalWrite(RMB, LOW);
  digitalWrite(RMA, HIGH);
  digitalWrite(LMA, LOW);
  digitalWrite(LMB, LOW);
}

int drive_Left() {  //The function for turning the bot left
  digitalWrite(RMB, LOW);
  digitalWrite(RMA, LOW);
  digitalWrite(LMA, HIGH);
  digitalWrite(LMB, LOW);
}

int stop_drive() {
  digitalWrite(RMB, LOW);
  digitalWrite(RMA, LOW);
  digitalWrite(LMA, LOW);
  digitalWrite(LMB, LOW);
}