#pragma once

#include "Auxiliar.h"

class Piesa: public Auxiliar{
protected:
    int pret;
    char cod[6];
public:
    Piesa();
    Piesa(int p, char c[6]);
   ~Piesa(){};
    int get_pret();
    void afisare();

};

