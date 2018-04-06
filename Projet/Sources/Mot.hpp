#ifndef _MOT_HPP
#define _MOT_HPP
#include <string>
using namespace std;

class Mot {
private:
  string valeur;
  int nbOccurrence;
public:
  Mot();
  Mot(string mot);
  bool egal(Mot mot);
  void afficher();
  int getCle(int base, int size);
  string getValeur();
  int getOccurrence();
  void addOccurrence();
};
#endif
