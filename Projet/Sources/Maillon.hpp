#ifndef _MAILLON_HPP
#define _MAILLON_HPP

/**
 * \file Maillon.hpp
 * \brief Maillon d'une liste chaînée de mots
 *
 * \author ----- A COMPLETER -----
 * 
 */

#include <string>

/**
 * \class Maillon
 * \brief Représentation d'un élement d'une liste chaînée de mots.
 *
 * La classe Maillon permet de représenter un élément d'une liste chaînée
 * de mots. Elle correspond essentiellement à un réceptacle neutre,
 *  ne disposant d'aucune fonctionnalité évoluée.
 * Ses attributs sont accessibles directement, afin de faciliter son 
 * utilisation.
 * Un maillon contient ainsi un mot (élément de la liste chaînée), 
 * le nombre de fois qu'il a été ajouté à la liste
 * (afin d'éviter de dupliquer des maillons) et un pointeur vers 
 * l'élement suivant de la liste.
 */
class Maillon {
public:
  std::string mot; /**< Le mot stocké dans le maillon */
  int nbOccurrence;/**< Le nombre de fois que le mot apparaît dans la liste */
  Maillon *suivant;/**< Pointeur vers le maillon suivant de la liste */

  /**
   * \fn Maillon()
   * \brief Constructeur par défaut de la classe Maillon. 
   *
   * Ce constructeur initialise le nombre d'occurrences à 0 et
   * le suivant à "vide"
   */
  Maillon();

  /**
   * \fn Maillon(std::string s)
   * \brief Constructeur de la classe Maillon. 
   *
   * Ce constructeur initialise le mot contenu dans le maillon avec
   * le mot passé en
   * paramètre, le nombre d'occurrences à 1 et le suivant à "vide".
   * \param s le mot qui sera stocké dans le maillon.
   */
  Maillon(std::string s);

  /**
   * \fn  ~Maillon()
   * \brief Destructeur de la classe Liste.
   */
  ~Maillon();


};

#endif


