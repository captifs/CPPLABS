#include <iostream>
#include <cstdlib>
#include <string.h>
#include "Masina.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv) {
    int n=5;
    Masina t;
    Masina *v = new Masina [5];
    v[0].Modif("Mercedes", "S", "BC99VIM",4);
    v[1].Modif("Dacia", "E", "BC99VIN",5);
    v[2].Modif("Mercedes", "C", "BC99VIT",4);
    v[3].Modif("Audi", "A6", "BC99MET",4);
    v[4].Modif("Audi", "A4", "BC99SEM",6);


    for(int i=0 ; i<5 ; i++)
        for(int j=i+1 ; j<5 ; j++)
            if(strcmp(v[i].getModel(),v[j].getModel())>0){
                t = v[i];
                v[i] = v[j];
                v[j] = t;
            }

    for(int i=0 ; i<5 ; i++)
        if(v[i].getUsi() > 4)
            v[i].Afisare();
    return 0;
}