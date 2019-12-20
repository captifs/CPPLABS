#pragma once
#include "Piesa_Gaurita.h"
#include "Piesa_Vopsita.h"
#include "Auxiliar.h"

class Ansamblu:public Auxiliar{
protected:
    Piesa_Gaurita pg;
    Piesa_Vopsita *v;
public:
    Ansamblu(Piesa_Gaurita p, Piesa_Vopsita *vec);
    Ansamblu(int p,char c[6], int ng, Piesa_Vopsita *vec);

    Ansamblu(const Ansamblu &a);
    Ansamblu& operator=(const Ansamblu &a);
    void afisare();
    int get_pret();
 //~Ansamblu();
};
