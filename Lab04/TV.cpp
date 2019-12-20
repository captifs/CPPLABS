#include <iostream>
using namespace std;
#include "TV.h"

TV::TV() {
    producator = NULL;
    model = NULL;
    for(int i = 0; i <= 3; i++) {
        dim[i] = '0'; }
    diag = 0;
}

TV::TV(char *prod, char*mod, float d[], float dg) {
    if (!prod) producator = nullptr;
    producator = new char[strlen(prod)+1];
    strcpy(producator,prod);
    if (!mod) model = nullptr;
    model = new char[strlen(mod)+1];
    strcpy(model,mod);
    diag = dg;
    for (int i = 0; i <3; i++) {
        dim[i] = d[i];
    }
}

TV::~TV() {
    delete [] producator;
    delete [] model;
}

void TV::modif(char*prod, char*mod, float d[],float dg) {
    if (!prod) producator = nullptr;
    producator = new char[strlen(prod)+1];
    strcpy(producator,prod);
    if (!mod) model = nullptr;
    model = new char[strlen(mod)+1];
    strcpy(model,mod);
    diag = dg;
    for (int i = 0; i <3; i++) {
        dim[i] = d[i];
    }
}

void TV::modif(const TV &t) {
    producator = new char[strlen(t.producator)+1];
    strcpy(producator,t.producator);
    model = new char[strlen(t.model)+1];
    strcpy(model, t.model);
    diag = t.diag;
    for (int i = 0; i <=3; i++) {
        dim[i] = t.dim[i];
    }
}


void TV::afis()const {
    cout <<producator<<" "<<model<<" ";
    for(int i= 0; i<3;i++)
        cout<<dim[i]<<" ";
    cout<<diag<<"\n";
}
char *TV::getProd()const{
    return producator;
}
float TV::getDiag()const {
    return diag;
}