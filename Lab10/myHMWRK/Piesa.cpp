#include <iostream>
#include "Piesa.h"

Piesa::Piesa():pret(0){
}

Piesa::Piesa(const Piesa &p){
    *this = p;
}

Piesa::Piesa(int p, char c[6]):pret(p){
    strcpy(cod,c);
}

int Piesa::get_pret(){return pret;}

void Piesa::afisare(){
    std::cout<<"Pretul: "<<pret<<std::endl;
    std::cout<<"Cod-ul: "<<cod<<std::endl;
}
