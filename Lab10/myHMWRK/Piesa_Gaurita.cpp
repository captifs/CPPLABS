
#include <iostream>
#include "Piesa_Gaurita.h"

Piesa_Gaurita::Piesa_Gaurita():Piesa(),nr_gauri(0){};

Piesa_Gaurita::Piesa_Gaurita(const Piesa_Gaurita &pg){
    *this = pg;
}

Piesa_Gaurita::Piesa_Gaurita(int p, char c[6], int g):Piesa(p,c),nr_gauri(g){}

void Piesa_Gaurita::afisare(){
    std::cout<<"Pretul: "<<pret<<std::endl;
    std::cout<<"Codul: "<<cod<<std::endl;
    std::cout<<"Nr de gauri : "<<nr_gauri<<std::endl;
}

int Piesa_Gaurita::get_pret() {return pret;}

int Piesa_Gaurita::get_gauri() {return nr_gauri;}
