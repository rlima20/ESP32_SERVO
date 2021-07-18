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

myservoBase.write(30);//esquerda 180 - direita 0
    delay(1000);
  myservoShoulder.write(30);//esquerda 180 - direita 0
    delay(1000);
  myservoElbow.write(180);//esquerda 180 - direita 0
    delay(1000);
  myservoWrist.write(20);//esquerda 180 - direita 0
    delay(1000);
  myservoHand.write(180);//esquerda 180 - direita 0
    delay(1000);
  }

void loop() {
  moveBase();
}

void moveBase(){
 for (posMyServoBase = 30; posMyServoBase <= 120; posMyServoBase += 1) {
    myservoBase.write(posMyServoBase);              
    delay(15);                       
  }
 for (posMyServoBase = 120; posMyServoBase >= 30; posMyServoBase -= 1) {
    myservoBase.write(posMyServoBase);              
    delay(15);                       
  }
  moveShoulder();
}

void moveShoulder(){
 for (posmyservoShoulder = 30; posmyservoShoulder <= 120; posmyservoShoulder += 1) {
    myservoShoulder.write(posmyservoShoulder);    
    for (posmyservoElbow = 180; posmyservoElbow >= 90; posmyservoElbow -=1){
      myservoElbow.write(posmyservoElbow);                
    }
    delay(15);                       
  }
 for (posmyservoShoulder = 120; posmyservoShoulder >= 30; posmyservoShoulder -= 1) {
    myservoShoulder.write(posmyservoShoulder);  
    for (posmyservoElbow = 90; posmyservoElbow <= 180; posmyservoElbow +=1){
      myservoElbow.write(posmyservoElbow);             
    }            
    delay(15);                       
  }
}

//==============================================================================//

void movimento1(){
  for (posmyservoShoulder = 60; posmyservoShoulder <= 120; posmyservoShoulder += 1) {
    myservoShoulder.write(posmyservoShoulder);              
    delay(25);                       
  }
  delay(10000);

  movimento2();
  
  for (posmyservoShoulder = 120; posmyservoShoulder >= 60; posmyservoShoulder -= 1) { 
    myservoShoulder.write(posmyservoShoulder);              
    delay(25);                       
  }
  delay(1000);
}

void movimento2(){
  for (posmyservoElbow = 170; posmyservoElbow >= 0; posmyservoElbow -= 1) {
    myservoElbow.write(posmyservoElbow);              
    delay(25);                       
  }
  delay(1000);
  
  for (posmyservoElbow = 0; posmyservoElbow <= 170; posmyservoElbow += 1) { 
    myservoElbow.write(posmyservoElbow);              
    delay(25);                       
  }
  delay(10000);
  movimento3();
}

void movimento3(){
   for (posmyservoWrist = 30; posmyservoWrist <= 180; posmyservoWrist += 1) {
    myservoWrist.write(posmyservoWrist);              
    delay(25);                       
  }
  delay(1000);
  
  for (posmyservoWrist = 180; posmyservoWrist >= 30; posmyservoWrist -= 1) { 
    myservoWrist.write(posmyservoWrist);              
    delay(25);                       
  }
  delay(10000);
  movimento4();
}

void movimento4(){
   for (posmyservoHand = 140; posmyservoHand <= 180; posmyservoHand += 1) {
    myservoHand.write(posmyservoHand);              
    delay(25);                       
  }
  delay(1000);
  
  for (posmyservoHand = 180; posmyservoHand >= 140; posmyservoHand -= 1) { 
    myservoHand.write(posmyservoHand);              
    delay(25);                       
  }
  delay(1000); 
}
