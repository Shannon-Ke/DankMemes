#define MOTOR_PIN 9
#define INV_PIN 10

void setup() {
  // put your setup code here, to run once:
pinMode(MOTOR_PIN, OUTPUT);
pinMode(INV_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Motor logic
  analogWrite(MOTOR_PIN, 220);
  digitalWrite(INV_PIN, LOW);
  delay(2000);
  
  digitalWrite(MOTOR_PIN, LOW);
  digitalWrite(INV_PIN, LOW);
  delay(1000);

  analogWrite(INV_PIN, 220);
  digitalWrite(MOTOR_PIN, LOW);
  delay(2000);

  digitalWrite(MOTOR_PIN, LOW);
  digitalWrite(INV_PIN, LOW);
  delay(1000);
}
