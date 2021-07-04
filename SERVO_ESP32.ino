#include <Servo.h>

Servo myservoBase;
int posMyServoBase = 0;

Servo myservoShoulder;
int posmyservoShoulder = 0;

Servo myservoElbow;
int posmyservoElbow = 0;

Servo myservoWrist;
int posmyservoWrist = 0;

Servo myservoHand;
int posmyservoHand= 0;

void setup() {
  myservoBase.attach(13);
  myservoShoulder.attach(12);
  myservoElbow.attach(14);
  myservoWrist.attach(27); 
  myservoHand.attach(26);

  myservoBase.write(90);
  myservoShoulder.write(90);
  myservoElbow.write(90);
  myservoWrist.write(90);
  myservoHand.write(120);
  
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
    for (posmyservoShoulder = 90; posmyservoShoulder <= 120; posmyservoShoulder += 1) {
    myservoShoulder.write(posmyservoShoulder);              
    delay(20);                       
  }
  delay(3000);
  
  for (posmyservoShoulder = 120; posmyservoShoulder >= 90; posmyservoShoulder -= 1) { 
    myservoShoulder.write(posmyservoShoulder);              
    delay(20);                       
  }
  delay(3000);
}

void motor3(){
    for (posmyservoElbow = 90; posmyservoElbow <= 140; posmyservoElbow += 1) {
    myservoElbow.write(posmyservoElbow);              
    delay(20);                       
  }
  delay(3000);
  
  for (posmyservoElbow = 140; posmyservoElbow >= 90; posmyservoElbow -= 1) { 
    myservoElbow.write(posmyservoElbow);              
    delay(20);                       
  }
  delay(3000);
}

void motor4(){
    for (posmyservoWrist = 90; posmyservoWrist <= 140; posmyservoWrist += 1) {
    myservoWrist.write(posmyservoWrist);              
    delay(20);                       
  }
  delay(3000);
  
  for (posmyservoWrist = 140; posmyservoWrist >= 90; posmyservoWrist -= 1) { 
    myservoWrist.write(posmyservoWrist);              
    delay(20);                       
  }
  delay(3000);
}

void motor5(){
    for (posmyservoHand = 120; posmyservoHand <= 150; posmyservoHand += 1) {
    myservoHand.write(posmyservoHand);              
    delay(20);                       
  }
  delay(3000);
  
  for (posmyservoHand = 150; posmyservoHand >= 120; posmyservoHand -= 1) { 
    myservoHand.write(posmyservoHand);              
    delay(20);                       
  }
  delay(3000);
}

