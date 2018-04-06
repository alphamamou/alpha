#ifndef _HTABLE_HPP
#define _HTABLE_HPP
#include "Mot.hpp"

#define DEF_SIZE 10

enum Etat {LIBRE, OCCUPE, EFFACE};

class Htable {
private:
  Mot *alveole;
  Etat *etat;
  unsigned int size;
public:
  Htable();
  Htable(int size);
  ~Htable();

};

#endif

