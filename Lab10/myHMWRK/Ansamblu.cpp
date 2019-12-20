#pragma once
#include <cstring>
#include <iostream>
#include "Ansamblu.h"
#include "Piesa.h"
#include "Piesa_Gaurita.h"
#include "Piesa_Vopsita.h"

Ansamblu::Ansamblu(Piesa_Gaurita s, Piesa_Vopsita *vec):pg(s){
    v = new Piesa_Vopsita[pg.get_gauri()];
    for(int i=0; i<pg.get_gauri(); i++)
        v[i] = vec[i];
}
Ansamblu::Ansamblu(int p, char c[6], int ng, Piesa_Vopsita *vec):pg(p,c,ng){
    v = new Piesa_Vopsita[pg.get_gauri()];
    for(int i=0; i<pg.get_gauri(); i++)
        v[i] = vec[i];

}

Ansamblu::Ansamblu(const Ansamblu &a) {
    *this = a;
}

Ansamblu& Ansamblu::operator=(const Ansamblu &a){
    (Piesa_Gaurita&)(*this)=a.pg;
    v = new Piesa_Vopsita[pg.get_gauri()];
    for(int i=0; i<pg.get_gauri(); i++)
        v[i] = a.v[i];
    return *this;
}

void Ansamblu::afisare(){
    std::cout<<"Ansamblu: "<<std::endl;
    pg.afisare();
    for(int i=0; i<pg.get_gauri();i++) {
        std::cout << "Piesa vopsita nr: " << i << std::endl;
        v[i].afisare();
    }
}

int Ansamblu::get_pret(){
    int sum = pg.get_pret();
    for(int i=0;i<pg.get_gauri();i++)
        sum+=v[i].get_pret();
    return sum;
}
