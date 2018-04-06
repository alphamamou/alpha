#ifndef _LISTE_HPP
#define _LISTE_HPP

/**
 * \file Liste.hpp
 *
 * \brief Liste chaînée de mots
 *
 * @author ----- A COMPLETER -----
 */

#include <string>
#include "Maillon.hpp"

/**
 * \class Liste 
 * \brief Représentation d'une liste chaînée de mots.
 *
 * La classe Liste permet de représenter une liste chaînée de mots, triée par
 * ordre alphabétique. Chaque mot ne peut apparaître qu'une fois dans la liste.
 */

class Liste {
private :
  Maillon *tete;/**< Pointeur vers le début de la liste */
public:

  /**
   * \fn Liste()
   * \brief Constructeur de la classe Liste. 
   *
   * Ce constructeur initialise le début de la liste à "vide".
   */
  Liste();

  /**
   * \fn ~Liste()
   * \brief Destructeur de la classe Liste.
   *
   * Ce destructeur efface l'ensemble des maillons de la liste.
   */
  ~Liste();

  /**
   * \fn void ajouter(std::string s)
   * \brief Ajout d'un mot à la liste.
   * Cette methode permet de rajouter le mot passé en paramètre à la liste,
   * en l'insérant à l'endroit qui permet de conserver la propriété de tri
   * de la liste par ordre alphabétique. Si le mot existe, son compteur
   * d'occurrence est incrémenté de 1 et aucun nouveau maillon n'est créé.
   * \see Maillon
   * \param s le mot à rajouter à la liste 
   */
  void ajouter(std::string s);

  /**
   * \fn  Maillon *rechercher(std::string s)
   * \brief Recherche d'un mot dans la liste.
   *
   * Cette méthode recherche le mot passé en paramètre dans la liste,
   * en tirant partie de la propriété de tri par ordre alphabétique, 
   * de manière à stopper la recherche dès que le mot ne peut plus être
   * trouvé.
   * \param s le mot à rechercher
   * \return un pointeur vers le Maillon contenant le mot s'il existe, un
   * pointeur nul sinon.
   */
  Maillon *rechercher(std::string s);

  /**
   * \fn  void afficher()
   * \brief Affichage du contenu de la liste.
   *
   * La méthode permet d'afficher l'ensemble des mots contenus de la liste 
   * à l'écran, à raison d'un mot par ligne, suivi du nombre d'occurrence de
   * de ce mot.
   */
  void afficher();

};// classe Liste

#endif
