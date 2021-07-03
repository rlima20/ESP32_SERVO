#include <Servo.h>

Servo myservoBase;
int posMyServoBase = 0;

Servo myservoFirst;
int posMyServoFirst = 0;

Servo myservoSecond;
int posMyServoSecond = 0;

Servo myservoThird;
int posMyServoThird = 0;

Servo myservoForth;
int posMyServoForth= 0;

void setup() {
  myservoBase.attach(13);
  myservoFirst.attach(12);
  myservoSecond.attach(14);
  myservoThird.attach(27); 
  myservoForth.attach(26);

  myservoBase.write(90);
  myservoFirst.write(90);
  myservoSecond.write(90);
  myservoThird.write(90);
  myservoForth.write(120);
  
  delay(2000);
  }

void loop() {
  motor1();
  delay(1000);
  motor3();
  delay(1000);
  motor4();
  motor5();
}

void motor1(){
  //Vai do meio para o final
  for (posMyServoBase = 90; posMyServoBase <= 180; posMyServoBase += 1) {
    myservoBase.write(posMyServoBase);              
    delay(20);                       
  }
  
  delay(1000);
  motor2();
  delay(3000);

  //Vai do final para o começo
  for (posMyServoBase = 180; posMyServoBase >= 0; posMyServoBase -= 1) { 
    myservoBase.write(posMyServoBase);              
    delay(30);                       
  }
  delay(3000);

  //Vai do começo para o final
  for (posMyServoBase = 0; posMyServoBase <= 180; posMyServoBase += 1) {
    myservoBase.write(posMyServoBase);              
    delay(20);                       
  }
  delay(3000);

  //Vai do final para o meio
  for (posMyServoBase = 180; posMyServoBase >= 90; posMyServoBase -= 1) {
    myservoBase.write(posMyServoBase);              
    delay(20);                       
  }
  delay(3000);
}

void motor2(){
    for (posMyServoFirst = 90; posMyServoFirst <= 120; posMyServoFirst += 1) {
    myservoFirst.write(posMyServoFirst);              
    delay(20);                       
  }
  delay(3000);
  
  for (posMyServoFirst = 120; posMyServoFirst >= 90; posMyServoFirst -= 1) { 
    myservoFirst.write(posMyServoFirst);              
    delay(20);                       
  }
  delay(3000);
}

void motor3(){
    for (posMyServoSecond = 90; posMyServoSecond <= 140; posMyServoSecond += 1) {
    myservoSecond.write(posMyServoSecond);              
    delay(20);                       
  }
  delay(3000);
  
  for (posMyServoSecond = 140; posMyServoSecond >= 90; posMyServoSecond -= 1) { 
    myservoSecond.write(posMyServoSecond);              
    delay(20);                       
  }
  delay(3000);
}

void motor4(){
    for (posMyServoThird = 90; posMyServoThird <= 140; posMyServoThird += 1) {
    myservoThird.write(posMyServoThird);              
    delay(20);                       
  }
  delay(3000);
  
  for (posMyServoThird = 140; posMyServoThird >= 90; posMyServoThird -= 1) { 
    myservoThird.write(posMyServoThird);              
    delay(20);                       
  }
  delay(3000);
}

void motor5(){
    for (posMyServoForth = 120; posMyServoForth <= 150; posMyServoForth += 1) {
    myservoForth.write(posMyServoForth);              
    delay(20);                       
  }
  delay(3000);
  
  for (posMyServoForth = 150; posMyServoForth >= 120; posMyServoForth -= 1) { 
    myservoForth.write(posMyServoForth);              
    delay(20);                       
  }
  delay(3000);
}

