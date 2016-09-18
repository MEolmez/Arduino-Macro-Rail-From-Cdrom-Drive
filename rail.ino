#include <AFMotor.h>
#include <multiCameraIrControl.h>
Canon D5(53); // ir led pin
int ForwardbuttonPin = 31;
int ForwardbuttonState = HIGH;

int BackwardbuttonPin = 30;
int BackwardbuttonState = HIGH;

int ShutterButton =29; 
int ShutterbuttonState = HIGH;

long lastDebounceTime = 0;
long debounceDelay = 300; 

AF_Stepper motor(48, 1); 
// Steps indicates how many steps per revolution the motor has. a 7.5degree/step motor has 360/7.5 = 48 steps.
//Stepper# is which port it is connected to. If you're using M1 and M2, its port 1. If you're using M3 and M4 it's port 2

void setup(){
  
  pinMode(ForwardbuttonPin, INPUT);
  digitalWrite(ForwardbuttonPin, HIGH);

  pinMode(BackwardbuttonPin, INPUT);
  digitalWrite(BackwardbuttonPin, HIGH);

  pinMode(ShutterButton, INPUT);
  digitalWrite(ShutterButton, HIGH);

  motor.setSpeed(10);  // 10 rpm   
} 

void loop(){  

  
  ForwardbuttonState = digitalRead(ForwardbuttonPin);
  BackwardbuttonState = digitalRead(BackwardbuttonPin);
  ShutterbuttonState = digitalRead(ShutterButton);
  

  if ( (millis() - lastDebounceTime) > debounceDelay) {
    if  (ForwardbuttonState == LOW){
    lastDebounceTime = millis();
    motor.step(1, FORWARD, SINGLE); //SINGLE, DOUBLE. INTERLEAVE or MICROSTEP.
    motor.release();
    }
  }


  if ( (millis() - lastDebounceTime) > debounceDelay) {
   if  (BackwardbuttonState == LOW){
   lastDebounceTime = millis();
   motor.step(1, BACKWARD, SINGLE); //SINGLE, DOUBLE. INTERLEAVE or MICROSTEP.
   motor.release();
    }
  }



  if ( (millis() - lastDebounceTime) > debounceDelay) {
   if  (ShutterbuttonState == LOW){
   lastDebounceTime = millis();
   D5.shutterNow();
   delay(1000);
    }
  }
 
}

