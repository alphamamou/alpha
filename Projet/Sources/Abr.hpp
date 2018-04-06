#ifndef _ABR_HPP
#define _ABR_HPP

/**
 * \file Abr.hpp
 *
 * \brief Arbre binaire de recherche, dont les clés sont des mots
 *
 * @author ----- A COMPLETER -----
 * 
 */

#include <string>

#include "Noeud.hpp"


/**
 * \class Abr
 * \brief Représentation d'un ensemble de mots sous la forme 
 * d'un arbre binaire de recherche.
 *
 * La classe Abr permet de représenter un ensemble de mots, structuré
 * sous forme d'un arbre binaire de recherche. Chaque mot représente
 * la clé des noeurds de l'arbre et ne peut  apparaître qu'une fois
 * dans l'arbre.
 */
class Abr {
private:
  Noeud *racine; /**< Racine de l'arbre binaire de recherche */
public:

  /**
   * \fn Abr()
   * \brief Constructeur de la classe Abr.
   *
   * Ce constructeur initialise la racine de l'arborescence à "vide".
   */
  Abr();

  /**
   * \fn  ~Abr()
   * \brief Destructeur de la classe Abr.
   *
   * Ce destructeur efface l'ensemble des noeuds de l'arborescence.
   */
  ~Abr();

  /**
   * \fn void afficher()
   * \brief Affichage du contenu de l'arborescence.
   *
   * La méthode permet d'afficher l'ensemble des mots contenus dans
   * l'arborescence à l'écran, à raison d'un mot par ligne, suivi du 
   * nombre d'occurrence de ce mot. Les mots sont affichés dans
   * l'ordre de tri alphabétique.
   */
  void afficher();

  /**
   * \fn void ajouter(std::string cle)
   * \brief Ajout d'un mot à l'arborescence.
   * Cette methode permet de rajouter le mot passé en paramètre dans l'arbre,
   * en l'insérant à l'endroit qui permet de conserver la propriété de tri
   * par ordre alphabétique de l'arborescence. Si le mot existe, son compteur
   * d'occurrence est incrémenté de 1 et aucun nouveau noeud n'est créé.
   * \param cle le mot à rajouter à la liste 
   */
  void ajouter(std::string cle);

 
  /**
   * \fn Noeud *rechercher(std::string cle)
   * \brief Recherche d'un mot dans l'arborescence.
   *
   * Cette méthode recherche le mot passé en paramètre dans l'arbre,
   * en tirant partie de la propriété de tri (ici, par ordre alphabétique), 
   * appliquée sur les noeuds de l'arbre.
   * \param cle le mot à rechercher
   * \return un pointeur vers le noeud trouvé, si le mot existe dans l'arbre,
   * un pointeur nul sinon.
   */
  Noeud *rechercher(std::string cle); 

 


private:
  /**
   * \fn void printInfixe(Noeud *a)
   * \brief Affichage du contenu d'une sous-arborescence.
   *
   * Cette méthode permet d'afficher le conteu d'une sous-arborescence
   * en utilisant un mode de parcours de type "infixe", qui permet
   * d'assurer un affichage dans l'ordre alphabétique des clés. 
   * Les informations affichées sont la clé et son nombre d'occurrence, 
   * suivies d'un passage à la ligne.
   * \param a la racine de la sous-arborescence à afficher.
   */
  void printInfixe(Noeud *a);

};
#endif
