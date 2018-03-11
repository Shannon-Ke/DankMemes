#define MOTOR_F 5
#define MOTOR_L 7
#define MOTOR_R 9

#define INV_F 6
#define INV_L 8
#define INV_R 10

int n;

void setup() {
  pinMode(MOTOR_F, OUTPUT);
  pinMode(INV_F, OUTPUT);

  pinMode(MOTOR_L, OUTPUT);
  pinMode(INV_L, OUTPUT);

  pinMode(MOTOR_R, OUTPUT);
  pinMode(INV_R, OUTPUT);
}

void loop() {
  //values of n for action:
  //1 - goUp
  //2 - goLeft
  //3 - goRight
  //4 - goFront
  //5 - goBack
  //6 - goAround
  //7 - goDown
  //8 or else - goOff
  if (Serial.available()) {
    n = Serial.read() - '0';
  
    if (n == 1) {
      int up_counter = 100;
      while(up_counter > 0) {
        up_counter = goUp(up_counter);
      }
    } else if (n == 2) {
      int left_counter = 100;
      while(left_counter > 0) {
        left_counter = goLeft(left_counter);
      }
    } else if (n == 3) {
      int right_counter = 100;
      while(right_counter > 0) {
        right_counter = goRight(right_counter);
      }
    } else if (n == 4) {
      int front_counter = 100;
      while(front_counter > 0) {
        front_counter = goFront(front_counter);
      }
    } else if (n == 5) {
      int back_counter = 100;
      while(back_counter > 0) {
        back_counter = goBack(back_counter);
      }
    } else if (n == 6) {
      int front_counter = 100;
      while(front_counter > 0) {
        front_counter = goFront(front_counter);
      }
  
      int left_counter = 100;
      while(left_counter > 0) {
        left_counter = goLeft(left_counter);
      }
  
      int back_counter = 100;
      while(back_counter > 0) {
        back_counter = goBack(back_counter);
      }
  
      int right_counter = 100;
      while(right_counter > 0) {
        right_counter = goRight(right_counter);
      } 
    } else if (n == 7) {
      int down_counter = 100;
      while(down_counter > 0) {
        down_counter = goDown(down_counter);
      }
    } else {
      analogWrite(MOTOR_F, 0);
      digitalWrite(INV_F, LOW);

      analogWrite(MOTOR_L, 0);
      digitalWrite(INV_L, LOW);

      analogWrite(MOTOR_R, 0);
      digitalWrite(INV_R, LOW);
    }
  } else {
    analogWrite(MOTOR_F, 50);
    digitalWrite(INV_F, LOW);

    analogWrite(MOTOR_L, 50);
    digitalWrite(INV_L, LOW);

    analogWrite(MOTOR_R, 50);
    digitalWrite(INV_R, LOW);
  }
  
  
}

int goOff(int x) {
  analogWrite(MOTOR_F, 0);
  digitalWrite(INV_F, LOW);

  analogWrite(MOTOR_L, 0);
  digitalWrite(INV_L, LOW);

  analogWrite(MOTOR_R, 0);
  digitalWrite(INV_R, LOW);
  
  return (x - 1);
}

int goDown(int x) {
  analogWrite(MOTOR_F, 20);
  digitalWrite(INV_F, LOW);

  analogWrite(MOTOR_L, 20);
  digitalWrite(INV_L, LOW);

  analogWrite(MOTOR_R, 20);
  digitalWrite(INV_R, LOW);
  
  return (x - 1);
}

int goUp(int x) {
  analogWrite(MOTOR_F, 150);
  digitalWrite(INV_F, LOW);

  analogWrite(MOTOR_L, 150);
  digitalWrite(INV_L, LOW);

  analogWrite(MOTOR_R, 150);
  digitalWrite(INV_R, LOW);
  
  return (x - 1);
}

int goLeft(int x) {
  analogWrite(MOTOR_F, 100);
  digitalWrite(INV_F, LOW);

  analogWrite(MOTOR_L, 50);
  digitalWrite(INV_L, LOW);

  analogWrite(MOTOR_R, 100);
  digitalWrite(INV_R, LOW);
  
  return (x - 1);
}

int goRight(int x) {
  analogWrite(MOTOR_F, 100);
  digitalWrite(INV_F, LOW);

  analogWrite(MOTOR_L, 100);
  digitalWrite(INV_L, LOW);

  analogWrite(MOTOR_R, 50);
  digitalWrite(INV_R, LOW);
  
  return (x - 1);
}

int goFront(int x) {
  analogWrite(MOTOR_F, 50);
  digitalWrite(INV_F, LOW);

  analogWrite(MOTOR_L, 100);
  digitalWrite(INV_L, LOW);

  analogWrite(MOTOR_R, 100);
  digitalWrite(INV_R, LOW);
  
  return (x - 1);
}

int goBack(int x) {
  analogWrite(MOTOR_F, 150);
  digitalWrite(INV_F, LOW);

  analogWrite(MOTOR_L, 100);
  digitalWrite(INV_L, LOW);

  analogWrite(MOTOR_R, 100);
  digitalWrite(INV_R, LOW);
  
  return (x - 1);
}

//
//const int ledPin = 13;
//int n;
//void setup() {
//  // put your setup code here, to run once:
//  pinMode(ledPin, OUTPUT);
//  Serial.begin(9600);
//  n = 7;
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  if (Serial.available()){
//    n = Serial.read() - '0';
//  }
//  x = 100;
//  while(x > 0) {
//    x = makeCircle(x);
//    
//  }
//  digitalWrite(ledPin, HIGH);
//  delay(n*100);
//  digitalWrite(ledPin, LOW);
//  delay(n*100);
//}
//
//int goUp(int x) {
//  pinMode(MOTOR_PIN, OUTPUT);
//  x = x - 1;
//}




//
//#define MOTOR_PIN 7
//#define INV_PIN 4
//int sig = 0;
//
//void setup() {
//  // put your setup code here, to run once:
//pinMode(MOTOR_PIN, OUTPUT);
//pinMode(INV_PIN, OUTPUT);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  analogWrite(MOTOR_PIN, sig);
//  analogWrite(INV_PIN, !sig);
//}


//char dataString[50] = {0};
//int a = 0;
//
//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(9600);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  a++;
//  sprintf(dataString, "%02X", a);
//  Serial.println(dataString);
//  delay(1000);
//}

