/*Bonjour, ce dossier SRC vous apprendra a utiliser Arduino !
Pour commencer, tous les projets Arduino doivent contenir ceci !*/
//       vvvvvvvvvvv
#include <Arduino.h>
//Oh ! Et, n'oublie JAMAIS le ;, sinon, le programme ne fonctionnera pas !
//Sauf dans certains cas, mais c'est rare, tel que dans les fonctions,
//ou dans les boucles, mais on en parlera plus tard...

Serial.begin(9600) //Cette fonction "allume" le moniteur serie (Terminal) avec une vitesse de 9600 bits par seconde

Serial.print("Bonjour !") //Cette fonction permet d'afficher du texte dans le moniteur serie (Terminal)
//En l'occurrence le texte est "Bonjour !", mais tu peux mettre n'importe quel texte entre les guillemets,
//et meme des variables (int, float, etc.)

Serial.println("Bonjour !") //Cette fonction est similaire a Serial.print(),
//mais elle ajoute un retour automatique à la ligne

Serial.available() //Cette fonction permet de savoir si le moniteur serie (Terminal) a reçu un texte ou non.

Serial.read() //Cette fonction permet de lire le texte reçu par le moniteur serie (Terminal).

Serial.write() //Cette fonction permet d'envoyer un texte au moniteur serie (Terminal).

Serial.flush() //Cette fonction permet de vider le moniteur serie (Terminal) de tout texte reçu ou envoyé.

Serial.setTimeout() //Cette fonction permet de définir un temps d'attente pour le moniteur serie (Terminal).

Serial.find() //Cette fonction permet de chercher un texte dans le moniteur serie (Terminal).

Serial.findUntil() //Cette fonction est similaire a Serial.find(),
//mais elle permet de chercher un texte jusqu'à un autre texte.

Serial.parseInt() //Cette fonction permet de lire un nombre entier dans le moniteur serie (Terminal).

Serial.parseFloat() //Cette fonction permet de lire un nombre à virgule dans le moniteur serie (Terminal).


//Pour le moniteur serie (Terminal), on utilisera le plus souvent print, println, read, available et begin.
