
#include "Maillon.hpp"

// Constructeur par défaut de la classe Maillon
Maillon::Maillon(){
  nbOccurrence = 0;// aucun mot stocké
  suivant = nullptr;
}

// Cosntructeur de la classe Maillon, auquel on fournit
// le mot à stocker.
Maillon::Maillon(std::string s){
  mot = s;          // initialisation du mot
  nbOccurrence = 1; // son compteur est mis a 1, car c'est la première occurrence
  suivant = nullptr;
}

// Destructeur de la classe
Maillon::~Maillon(){
  // rien à faire
}


