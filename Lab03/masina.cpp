#include <iostream>
#include "masina.h"
#include <string.h>

using namespace std;

Masina::Masina(char* marca, char* model, char numar[8], int usi){
    this -> marca = new char[strlen(marca)+1];
    strcpy(this -> marca,marca);
    this -> model = new char[strlen(model)+1];
    strcpy(this -> model,model);
    strcpy(this -> numar, numar);
    this -> usi = usi;
}

Masina::Masina(){
    marca = NULL;
    model = NULL;
}

Masina::~Masina(){
    delete [] marca;
    delete [] model;
}

Masina::Masina(const Masina &x){
    marca = new char[strlen(x.marca)+1];
    strcpy(marca,x.marca);
    model = new char[strlen(x.model)+1];
    strcpy(model,x.model);
    strcpy(numar,x.numar);
    usi =x.usi;

}

void Masina::Afisare()const{
    cout<<marca<<endl;
    cout<<model<<endl;
    cout<<numar<<endl;
    cout<<usi<<endl;
}

void Masina::Modif(char* marcaa,char* modell,char nrr[8], int u){
    if(marca != NULL)
        delete [] marca;
    marca = new char [strlen(marcaa)+1];
    strcpy(marca,marcaa);
    model = new char [strlen(modell)+1];
    strcpy(model,modell);
    strcpy(numar,nrr);
    usi = u;
}

void Masina::Modif(const Masina &x){
    strcpy(marca,x.marca);
    strcpy(model,x.model);
    strcpy(numar,x.numar);
    usi = x.usi;
}

int Masina::getUsi()const{
    return usi;
}

char* Masina::getModel()const{
    return model;
}
