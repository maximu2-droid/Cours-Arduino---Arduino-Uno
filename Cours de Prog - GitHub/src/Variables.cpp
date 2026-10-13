/*Bonjour, ce cours vous apprendra a utiliser les variables Arduino !
Pour commencer, tous les projets Arduino doivent contenir ceci !*/
//       vvvvvvvvvvv
#include <Arduino.h>
//Oh ! Et, n'oublie JAMAIS le ;, sinon, le programme ne fonctionnera pas !
//Sauf dans certains cas, mais c'est rare, tel que dans les fonctions,
//ou dans les boucles, mais on en parlera plus tard...

int monNombre=0;
/*int variable=var permet de mettre une variable sur un certain nombre.
Tu peux aussi mettre une autre fonction telle que : int maVariable=Variable,
ca permettra a ce que, des que tu changes la variable "Variable", maVariable changera aussi !
int peut avoir une valeur negative !*/

float h3=8.5;
//float fonctionne un peu comme int, mais UNIQUEMENT A VIRGULE ! Attention, float peut avoir des valeurs negatives aussi !
//La virgule est representée par un point, et non pas une virgule, donc 8.5 est correct, mais 8,5 ne l'est pas !

unsigned int n6=2;
//unsigned int est un peu different... il n'utilise que des nombre positifs, AUCUN NEGATIF !
//C'est pour ca que le "unsigned" est la, ca veut dire "non signé", donc pas de negatif !

byte n7=3;
//byte est un peu comme unsigned int, mais il ne peut pas depasser 255,

bool n8=true;
//bool est un type de variable qui ne peut avoir que deux valeurs : true ou false (vrai ou faux, 0 ou 1).
//C'est tres pratique pour les conditions, on en parlera plus tard

char n9='A';
//char est un type de variable qui ne peut contenir qu'un seul caractere,
//tel que 'A', 'B', 'C', '1', '2', '3', etc. Il est important de mettre le caractere entre apostrophes,
//sinon, le programme ne fonctionnera pas !

//On n'est pas non plus obligés de mettre une valeur a une variable, on peut aussi la laisser vide, elle sera mise automatique à 0.
//Tu peux aussi lui donner une valeur plus tard dans le programme.
