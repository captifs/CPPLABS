#pragma once
#include "Piesa.h"

class Piesa_Vopsita: public Piesa{
protected:
    char *culoare;
    bool tratata;
public:
    Piesa_Vopsita();
    Piesa_Vopsita(const Piesa_Vopsita &pv);
    Piesa_Vopsita(int p, char cd[6], char *cul, bool t);
    Piesa_Vopsita& operator=(const Piesa_Vopsita &pv);
    void afisare();
    int get_pret();
    bool get_t_t();
    ~Piesa_Vopsita();
};
