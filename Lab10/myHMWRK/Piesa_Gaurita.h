#pragma once

#include "Piesa.h"

class Piesa_Gaurita: public Piesa{
protected:
    int nr_gauri;
public:
    Piesa_Gaurita();
    Piesa_Gaurita(int p,char c[6], int g);
    void afisare();
    int get_pret();
    int get_gauri();
};
