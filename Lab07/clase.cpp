#include <iostream>
#include "clase.h"
//Functii Persoana

Persoana::~Persoana() {
    if(nume){
        delete[] nume;
        nume = NULL;
    }
}

Persoana::Persoana(const Persoana &p) {
    *this = p;
}
Persoana& Persoana::operator=(const Persoana &p) {
    varsta = p.varsta;
    if (!p.nume) nume = NULL;
    else {
        nume = new char[strlen(p.nume)+1];
        strcpy(nume,p.nume);
    }
    return *this;
}

void Persoana::afisare() {
    std::cout<<" Nume Persoana:"<< nume<<"\n"<< "Varsta:"<< varsta << std::endl;
}



//Functii angajat




void Angajat::afisare() {
    Persoana::afisare();
    std::cout<< " Salariu:" << salariu<<std::endl;
}

double Angajat::getSalariu() const {
    return salariu;
}

// Functii angajat part time

Angajat_Pt& Angajat_Pt::operator=(const Angajat_Pt &pt) {
    Angajat::operator=(pt);
    this->nr_ore = pt.nr_ore;
    if (!pt.detalii) detalii = NULL;
    else {
        detalii = new char[strlen(pt.detalii)+1];
        strcpy(detalii,pt.detalii);
    }

    return *this;
}

Angajat_Pt::Angajat_Pt(const Angajat_Pt &pt){
    nume = NULL;
    detalii = NULL;
    *this = pt;
}

void Angajat_Pt::afis() {
    Angajat::afisare();
    std::cout<<" Nr.ore: "<< nr_ore << std::endl << "Detalii: "<<detalii<<"\n";
}

int Angajat_Pt::getNr_ore() const {
    return nr_ore;
}
float Angajat_Pt::getVs() const {
    return varsta;
}
