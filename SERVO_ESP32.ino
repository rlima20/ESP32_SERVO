#include <Servo.h>

Servo myservo;
int pos = 0;

Servo myservo2;
int pos2 = 0;

Servo myservo3;
int pos3 = 0;

void setup() {
  myservo.attach(13);
  myservo2.attach(12);
  myservo3.attach(14);
  
  myservo.write(90);
  myservo2.write(30);
  myservo3.write(90);
  delay(2000);
  }

void loop() {
  motor1();
  delay(1000);
  motor2();
  delay(1000);
  motor3();
  delay(1000);
}

void motor1(){
  //Vai do meio para o final
  for (pos = 90; pos <= 180; pos += 1) {
    myservo.write(pos);              
    delay(20);                       
  }
  delay(3000);

  //Vai do final para o começo
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(30);                       
  }
  delay(3000);

  //Vai do começo para o final
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);              
    delay(20);                       
  }
  delay(3000);

  //Vai do final para o meio
  for (pos = 180; pos >= 90; pos -= 1) {
    myservo.write(pos);              
    delay(20);                       
  }
  delay(3000);
}

void motor2(){
    for (pos2 = 30; pos2 <= 100; pos2 += 1) {
    myservo2.write(pos2);              
    delay(20);                       
  }
  delay(3000);
  
  for (pos2 = 100; pos2 >= 30; pos2 -= 1) { 
    myservo2.write(pos2);              
    delay(20);                       
  }
  delay(3000);
}

void motor3(){
    for (pos3 = 90; pos3 <= 140; pos3 += 1) {
    myservo3.write(pos3);              
    delay(20);                       
  }
  delay(3000);
  
  for (pos3 = 140; pos3 >= 90; pos3 -= 1) { 
    myservo3.write(pos3);              
    delay(20);                       
  }
  delay(3000);
}

