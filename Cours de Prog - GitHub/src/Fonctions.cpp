/*Bonjour, ce dossier SRC vous apprendra a utiliser Arduino !
Pour commencer, tous les projets Arduino doivent contenir ceci !*/
//       vvvvvvvvvvv
#include <Arduino.h>
//Oh ! Et, n'oublie JAMAIS le ;, sinon, le programme ne fonctionnera pas !
//Sauf dans certains cas, mais c'est rare, tel que dans les fonctions,
//ou dans les boucles, mais on en parlera plus tard...

if(){} : SI //Cette fonction permet de savoir si une condition est vraie ou fausse,
//et de faire quelque chose en fonction de la réponse.

else{} : SINON //Cette fonction permet de faire quelque chose si la condition if est fausse.

else if(){} : SINON SI //Cette fonction permet de faire quelque chose si la condition if est fausse,
//mais que la condition else if est vraie.

/*Tu peux mettre autant de if que tu veux, mais n'oublie pas de mettre des accolades !
//Elles servent a deliminer le debut et la fin d'une fonction, d'une boucle, ou d'une condition.
Exemples :*/

int a=0;

void setup(){
Serial.begin(9600);
}

void loop(){
if(a==1) {
  a=a+1;
  Serial.println(a);
} else if(a!=2) {
  a=a+2;
  Serial.println(a);
} else {
  a=a+3;
  Serial.println(a);
}
}





pinMode(); //Cette fonction permet de definir si une broche est en entree ou en sortie (INPUT, OUTPUT).
/*Exemple :*/ pinMode(13, OUTPUT); //La broche 13 est en sortie, le contrôleur peut dire si la broche s'allume ou s'éteint.

digitalRead(x); //Cette fonction permet de lire l'état (HIGH, LOW) sur une broche x.

digitalWrite(x, HIGH/LOW); //Cette fonction permet de mettre la broche x en état HIGH ou LOW (allumée ou éteinte).

analogRead(x); //Cette fonction permet de lire la valeur d'une broche x (0-1023).

analogWrite(x, y); //Cette fonction permet de mettre la broche x en état HIGH ou LOW (allumée ou éteinte) avec une valeur y (0-255).


