#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include "TV.h"

using namespace std;
int main() {

    TV *vec = new TV[3];
    float dim[3] = {1, 2, 3};
    vec[0].modif("Cerway", "TV100", dim, 10);
    vec[0].afis();
    vec[1].modif("Aecde","Tv200",dim,10);
    vec[1].afis();
    cout << "Cu diag mai mic ca 50: ";
    for (int i = 0; i < 2; i++) {
        if (vec[i].getDiag() < 50) {
            vec[i].afis();
        }
    }
//
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 2; j++)
            if ((strcmp(vec[i].getProd(), vec[j].getProd())) > 0) {
                TV aux;
                aux.modif(vec[i]);
                vec[i].modif(vec[j]);
                vec[j].modif(aux);
            }
    cout <<"\n";
    cout << "Sortat producatori: " << "\n";
    for (int i = 0; i < 2; i++) {
        vec[i].afis();
    }


    return 0;
}
