#include <iostream>
#include "Liste.hpp"

// Constructeur de la classe
Liste::Liste(){
  tete = nullptr;
}

// Destructeur de la classe
// On parcourt la liste et on efface chacun de ses maillons.
Liste::~Liste(){
  Maillon *cour;// pointeur vers le maillon à effacer

  while(tete){// parcourir la liste
    cour = tete;
    tete = tete->suivant;
    delete cour;
  }
}

// Ajouter un mot à la liste chaînée.
// Si le mot existe, le compteur d'occurrence du maillon correspondant 
// est incrémenté. Si le mot n'existe pas, un nouveau maillon est créé
// pour ce mot et inséré à un endroit permettant de conserver la propriété
// de tri alphabétique par ordre croissant.
void Liste::ajouter(std::string s){

  // rechercher si s est déjà présente

  Maillon *cour = tete;   // maillon courant
  Maillon *prec = nullptr;// maillon précédant le maillon courant

  while(cour && cour->mot<s){// avancer dans la liste
    prec = cour;
    cour = cour->suivant;
  }

  // en sortie : on est en fin de liste ou mot >= s

  if(cour && cour->mot==s){// le mot existe
    cour->nbOccurrence++;
    return;
  }

  // le mot n'existe pas - créer le nouveau maillon
  Maillon *nouv = new Maillon(s);

  // insérer le nouveau mot à sa place
  if(!prec){// insertion en tête
    nouv->suivant = tete;
    tete = nouv;
  }else{// insertion intermédiaire ou en fin
    prec->suivant = nouv;
    nouv->suivant = cour;
  }
  
}

// Rechercher si le mot s existe dans la liste
// Si il existe, on renvoie un pointeur vers son maillon
// Sinon on renvoie un pointeur nul.
Maillon *Liste::rechercher(std::string s){

}

// Afficher le contenu de la liste, à raison d'un mot par ligne.
// chaque ligne contient le mot et son nombre d'occurrences.
void Liste::afficher(){

}
