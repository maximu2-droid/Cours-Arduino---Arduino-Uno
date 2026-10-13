/*Bonjour, ce dossier SRC vous apprendra a utiliser Arduino !
Pour commencer, tous les projets Arduino doivent contenir ceci !*/
//       vvvvvvvvvvv
#include <Arduino.h>
//Oh ! Et, n'oublie JAMAIS le ;, sinon, le programme ne fonctionnera pas !
//Sauf dans certains cas, mais c'est rare, tel que dans les fonctions,
//ou dans les boucles, mais on en parlera plus tard...

//Pour utiliser un Servomoteur, il te faut d'abord inclure la librairie Servo.h, qui est deja incluse dans Arduino.
#include <Servo.h>

monServo.attach(x); //Cette fonction permet de "brancher" le servomoteur sur les broches 0-13 de la carte Arduino.

monServo.write(x); //Cette fonction permet de faire tourner le servomoteur a 0-180°.

monServo.writeMicroseconds(x); //Cette fonction permet de faire tourner le servomoteur a une position précise en microsecondes, entre 1000 et 2000.

monServo.read(x); //Cette fonction permet de lire la position actuelle du servomoteur branché sur la broche x (0-13).

monServo.detach(x); //Cette fonction permet de "débrancher" le servomoteur de la carte Arduino.

monServo.attached(); //Cette fonction permet de savoir si le servomoteur est "branché" ou non sur la carte Arduino.

monServo.timers(x); //Cette fonction permet de savoir quel timer est utilisé par le servomoteur.

monServo.setMinimumPulse(x); //Cette fonction permet de définir la valeur minimale du signal PWM pour le servomoteur, entre 500 et 2500.

monServo.setMaximumPulse(x); //Cette fonction permet de définir la valeur maximale du signal PWM pour le servomoteur, entre 500 et 2500.
