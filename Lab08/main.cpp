#include "Punct.h"

int main() {
    Punct **vec = new Punct*[5];
    vec[0] = new Punct((char*)"Punct", 1, 2, 3);
    vec[1] = new Patrat((char*)"Patrat", 1, 2 ,3, 5);
    vec[2] = new Cerc((char*)"Cerc", 1, 2 ,3 , 5);
    vec[3] = new Prisma((char*)"Prisma",1, 2, 3, 5, 10);
    vec[4] = new Cilindru((char*)"Cilindru", 1, 2 ,3 , 5, 5);


    cout<<"Vector neordonat!"<<endl;
    for(int i=0;i<5;i++){
        vec[i]->afisare();
    }

    cout<<"Sortez dupa volum"<<endl;
    for (int i=0;i<4;i++){
        for(int j=i+1;j<5;j++)
            if(vec[i]->volum() > vec[j]->volum()){
                Punct* aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
    }
    for(int i=0;i<5;i++){
        vec[i]->afisare();
    }

    cout<<"Caut aria maxima care e egala cu: ";
    float max = 0;
    for (int i=0;i<4;i++){
        for(int j=i+1;j<5;j++)
            if(vec[i]->aria() > vec[j]->aria()){
                max = vec[i]->aria();
                vec[i]=vec[j];
            }
    }
    cout<<max<<endl;

    cout<<"Perimetru mai mare ca 3: "<<endl;
    for(int i = 0; i < 5; i++) {
        if (vec[i]->perimetru() > 5) {
            vec[i]->afisare();
        }
    }
    return 0;
}