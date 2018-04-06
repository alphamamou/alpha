#ifndef _NOEUD_HPP
#define _NOEUD_HPP

/**
 * \file Noeud.hpp
 * \brief Noeud d'une arborescence binaire.
 *
 * \author ----- A COMPLETER -----
 * 
 */

#include <string>

/**
 * \class Noeud
 * \brief Représentation d'un élement d'une arborescence binaire de recherche.
 *
 * La classe Noeud permet de représenter un élément d'une arborescence binaire
 * de recherche, dont les clés sont des mots. Elle correspond essentiellement
 * à un réceptacle neutre, ne disposant d'aucune fonctionnalité évoluée.
 * Ses attributs sont accessibles directement, afin de faciliter son
 * utilisation.
 * Un Noeud contient ainsi un mot (la clé de recherche) et le nombre de fois
 * qu'il a été ajouté à l'arborescence (afin d'éviter de dupliquer des Noeuds),
 * ainsi que des pointeurs vers les fils gauche et droit du noeud et vers
 * son père dans l'arborescence.
 */
class Noeud {
public:
  std::string cle;/**< Le mot stocké dans le noeud, servant de clé */
  int nbOccurrence;/**< Le nombre de fois que le mot apparaît dans l'arbre */
  Noeud* fgauche;/**< Pointeur vers le fils gauche du noeud. */
  Noeud *fdroit;/**< Pointeur vers le fils droit du noeud. */
  Noeud *pere; /**< Pointeur vers le père du noeud. */

public:

  /**
   * \fn Noeud()
   * \brief Constructeur par défaut de la classe Noeud. 
   *
   * Ce constructeur initialise le nombre d'occurrence à 0, 
   * les pointeurs à "vide" et la clé reste vide.
   */
  Noeud();

  /**
   * \fn Noeud(std::string s)
   * \brief Constructeur de la classe Noeud. 
   *
   * Ce constructeur initialise le mot contenu dans le noeud avec le mot
   * passé en paramètre, le nombre d'occurrences à 1 et les différents
   * pointeurs à "vide"
   * \param s le mot qui servira de clé dans la noeud.
   */
  Noeud(std::string s);

  /**
   * \fn ~Noeud()
   * \brief Destructeur de la classe Noeud.
   */
  ~Noeud();


  /**
   * \fn void afficher()
   * \brief Affichage du contenu d'un noeud.
   *
   * La méthode affiche le contenu d'un noeud sur une ligne, 
   * sans passage à la ligne. Les données
   * affichées sont la clé et le nombre d'occurences de cette clé.
   */
  void afficher();
};

#endif

