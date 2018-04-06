/**
 * \file mesurer.cpp
 *
 * \brief Fichier principal d'une application permettant de calculer la distance
 * intertextuelle entre deux textes. 
 * 
 * Cette application correspond à la réalisation du projet 2017/2018 du module d'Algorithmique Avancée
 * de seconde année de Licence Informatique à l'Université du Littoral Côte d'Opale. Elle a pour but
 * de mesurer une distance intertextuelle entre deux textes, afin de déterminer si ceux-ci ont été 
 * écrits par le même auteur ou pas.
 *
 * \author  ----- A COMPLETER -----
 */
#include <iostream>
#include <fstream>
using namespace std;


/**
 * \fn int main(int argc, char *argv[])
 * \brief Point d'entrée de l'application.
 *
 * La fonction permet de relire le contenu de deux fichiers texte, de stocker les mots qui les
 * composent dans une structure de données choisie parmi 3 possibles (liste chaînée, arbre binaire
 * de recherche et table de hachage) pour chaque texte, puis de calculer une distance intertextuelle
 * entre ces deux textes. 
 * \param argc le nombre d'arguments passés sur la ligne de commande lors du lancement de l'application
 * y compris le nom de la commande. 
 * \param argv un tableau de chaînes de caractères, qui contient chacun des arguments de la ligne de
 * commande. Le format de la ligne de commande doit être : 
 * ./mesurer  <-l|-a|-h> fichier1  fichier2 
 * avec -l lorsque l'utilisateur souhaite utiliser des listes chaînées pour stocker les mots des textes, 
 * -a lorsqu'il souhaite utiliser des arbres binaires de recherche ou -h pour des tables de hachage.
 * L'option doit être suivie du nom des deux fichiers contenant les textes à analyser.
 * \return une valeur nulle si l'application s'est exécutée sans problème, une valeur négative sinon.
 */
int main(int argc, char *argv[]){

  // vérification des paramètres
  if(argc!=4){ // la ligne de commande doit contenir 4 paramètres
    cout << "syntaxe : " << argv[0] << " <-l|-a|-h> fichierTexte1 fichierTexte2" << endl;
    return -1;
  }

  // vérification de la validité de la structure de données choisie
  // les options valides sont : -l, -a et -h

  string sd(argv[1]); // l'option se trouve dans la case 1 de argv

  if(sd != "-l" && // liste chaînée
     sd != "-a" && // arbre binaire de recherche
     sd != "-h"    // table de hachage
     ){// option invalide
    cout << "choix de la structure incorrect ! (" << sd << ")" << endl;
    return -1;
  }

  // vérification de l'existence des fichiers
  fstream in1;
  in1.open(argv[2], ios::in);
  if(!in1.is_open()){
    cout << "erreur de lecture du fichier " << argv[2] << endl;
    return -2;
  }
  fstream in2;
  in2.open(argv[3], ios::in);
  if(!in2.is_open()){
    cout << "erreur de lecture du fichier " << argv[3] << endl;
    in1.close();
    return -3;
  }


  // lecture du premier fichier

  // fermeture du premier fichier
  in1.close();


  // lecture du second fichier 

  // fermeture du second fichier
  in2.close();


  return 0; // tout s'est bien passé
}
