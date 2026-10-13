//Oh non ! mon code ne fonctionne pas ! Tu peux m'aider à le corriger ? Le voici !
//ATTENTION ! certains endroits ont des petits pièges...

#include <Arduino.h>
#include <Servo.h>

.attach(0); 
int orientationServo;
float vitesseServo;


void setup(){
  Serial.(9600);
  =0; //On met le servo a 0° (à gauche)
  monServo.write(orientationServo); //On envoie la valeur au servo
  vitesseServo=0.5; //On met la vitesse du servo a 0.5° par milliseconde
}

void loop(){
    servo();
    led();
}

void servo(){
  orientationServo=orientationServo+vitesseServo; //On ajoute la vitesse a l'orientation du servo
  monServo.(orientationServo); //On envoie la valeur au servo
  delay(1); //On attend 1 milliseconde
  if(orientationServo>=180){ //Si le servo est a 180° (à droite)
    vitesseServo=; //On met la vitesse a -0.5° par milliseconde (le servo va tourner dans l'autre sens)
}
  if(<=0){ //Si le servo est a 0° (à gauche)
    vitesseServo=; //On met la vitesse a 0.5° par milliseconde (le servo va tourner dans l'autre sens)
  }
}

void led(){
  if(orientationServo>=60&&orientationServo<=150){ //Si le servo est entre 60° et 150° (vers le milieu)
    digital(13,HIGH); //On allume la LED
  }  {
    digital(13,LOW); //On éteint la LED
  }
}
