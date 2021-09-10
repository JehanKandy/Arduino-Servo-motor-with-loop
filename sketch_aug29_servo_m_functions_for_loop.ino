//...............JehanKandy........................
//........www.jehankandy.com.......................
//........www.github.com/JehanKandy................

//.......................Motors....................
//.........Servo Motor Function and for loop.......

//in here you should include Servo.h lib..
#include <Servo.h>

//define Servo motors
Servo motor1;


void setup() {
  //define pins for Servo Motors
  motor1.attach(2);  

}

void loop() {
  //Now in here you can call the all functions
  Servom();
  Servoloop();
  

  
  
}
//create function for Servo motoe -> Servom
void Servom(){
  motor1.write(90);
  delay(1000);
  motor1.write(90);
  delay(1000);
}
//create another function for for loop with servo motor -> Servoloop
void Servoloop(){
  for(int i = 0; i <= 180; i=i+20){ //forword
    motor1.write(i);
    delay(100);
  }
  for(int q = 180; q >= 0; q=q-20){ //backword
    motor1.write(q);
    delay(1000);
  }
}

//.........coded by : JehanKandy....
//...........Thank You..............
