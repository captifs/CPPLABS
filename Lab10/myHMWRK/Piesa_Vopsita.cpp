
#include <cstring>
#include <iostream>
#include "Piesa_Vopsita.h"
#include "Piesa.h"

Piesa_Vopsita::Piesa_Vopsita():Piesa(),tratata(false) {
    culoare = NULL;
}

Piesa_Vopsita::Piesa_Vopsita(const Piesa_Vopsita &pv){
    culoare = NULL;
    *this = pv;
}

Piesa_Vopsita::Piesa_Vopsita(int p, char cd[6], char *c, bool t):Piesa(p,cd),tratata(t){
    if (culoare || !c) culoare = NULL;
    culoare = new char[strlen(c)+1];
    strcpy(culoare,c);
}

Piesa_Vopsita& Piesa_Vopsita::operator=(const Piesa_Vopsita &pv){
    pret = pv.pret;
    if (culoare || !pv.culoare) culoare = NULL;
    culoare = new char[strlen(pv.culoare)+1];
    strcpy(culoare,pv.culoare);
    tratata = pv.tratata;
    return *this;
}

void Piesa_Vopsita::afisare(){
    std::cout<<"Pretul: "<<pret<<std::endl;
    std::cout<<"Culoarea: "<<culoare<<std::endl;
    std::cout<<"Tratata?: "<<tratata<<std::endl;
}

int Piesa_Vopsita::get_pret() {
    return pret;
}

bool Piesa_Vopsita::get_t_t() {return tratata;}

Piesa_Vopsita::~Piesa_Vopsita() {
    if (culoare) delete[] culoare;
    culoare = NULL;
}
