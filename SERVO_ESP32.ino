#include <Servo.h>

Servo myservoBase;
Servo myservoShoulder;
Servo myservoElbow;
Servo myservoWrist;
Servo myservoHand;

int posMyServoBase = 0;
int posmyservoShoulder = 0;
int posmyservoElbow = 0;
int posmyservoWrist = 0;
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
  myservoHand.write(170);//esquerda 180 - direita 0
    delay(1000);
  }

void loop() {
  giraBaseEsquerda(180, 1000);              
  giraBaseDireita(30, 1000);              
  moveShoulder(30, 90, 1000);
  abreGarra(140, 1000);
  giraPulsoEsquerda(120, 1000);
  giraPulsoDireita(20, 1000);
  fechaGarra(175, 1000);
  abreGarra(140, 1000);
  giraPulsoEsquerda(120, 1000);
  moveShoulderToCatch(30, 90, 1000);
  delay(180000);
}

void giraBaseEsquerda(int angulo, int tempo){
  myservoBase.write(angulo);
  delay(tempo);
}

void giraBaseDireita(int angulo, int tempo){
  myservoBase.write(angulo);
  delay(tempo);
}

void abreGarra(int angulo, int tempo){
  myservoHand.write(angulo);
  delay(tempo);
}

void fechaGarra(int angulo, int tempo){
  myservoHand.write(angulo);
  delay(tempo);
}

void giraPulsoEsquerda(int angulo, int tempo){
  myservoWrist.write(angulo);
  delay(tempo);
}

void giraPulsoDireita(int angulo, int tempo){
  myservoWrist.write(angulo);
  delay(tempo);
}

void moveShoulder(int posInicial, int posFinal, int tempo){
 for (posmyservoShoulder = posInicial; posmyservoShoulder <= posFinal; posmyservoShoulder += 1) {
    myservoShoulder.write(posmyservoShoulder);    
    for (posmyservoElbow = 180; posmyservoElbow >= 130; posmyservoElbow -=1){
      myservoElbow.write(posmyservoElbow);                
    }
    delay(30);                       
  }
 for (posmyservoShoulder = posFinal; posmyservoShoulder >= posInicial; posmyservoShoulder -= 1) {
    myservoShoulder.write(posmyservoShoulder);              
    delay(30);                       
  }
    for (posmyservoElbow = 130; posmyservoElbow <= 180; posmyservoElbow +=1){
      myservoElbow.write(posmyservoElbow);
      delay(30);             
    }
  delay(tempo);
}

void moveShoulderToCatch(int posInicial, int posFinal, int tempo){
 for (posmyservoShoulder = posInicial; posmyservoShoulder <= posFinal; posmyservoShoulder += 1) {
    myservoShoulder.write(posmyservoShoulder);    
    delay(30);                       
  }
  fechaGarra(175, 1000);
 
 for (posmyservoShoulder = posFinal; posmyservoShoulder >= posInicial; posmyservoShoulder -= 1) {
    myservoShoulder.write(posmyservoShoulder);              
    delay(30);                       
  }
  delay(tempo);
  giraPulsoDireita(20, 1000);   
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
