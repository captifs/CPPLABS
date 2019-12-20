#include "Punct.h"

Punct& Punct::operator=(const Punct&p) {
    x = p.x;
    y = p.y;
    z = p.z;
    if(p.figura == NULL)
        figura = NULL;
    else {
        figura = new char[strlen(p.figura) + 1];
        strcpy(figura, p.figura);
    }

    return *this;
}

Punct::Punct(const Punct &p) {
    *this = p;
}

void Punct::afisare() {
    cout<<" Figura:" << figura << endl;
    cout<< " Punctele: " << x << "," << y << "," << z <<endl;
    cout<< " Aria:" << aria() << " Perimetru:" << perimetru() << " Volum:" << volum() << endl;
}


//Functii Patrat
void Patrat::afisare() {
    cout<<" Figura:" << figura << endl;
    cout<< " Latura: "<<latura<<endl;
}



//Functii Cerc
void Cerc::afisare() {
    cout<< " Figura:" << figura << endl;
    cout << " Raza:" << raza <<endl;
    cout<< " Aria:" << aria() << " Perimetru:" << perimetru() << " Volum:" << volum() << endl;
}


//Functii Prisma
void Prisma::afisare() {
    cout<< " Figura:" << figura << endl;
    cout << " Inaltime:" << inaltime <<endl;
    cout<< " Aria:" << aria() << " Perimetru:" << perimetru() << " Volum:" << volum() << endl;
}

void Cilindru::afisare() {
    cout<< " Figura:" << figura << endl;
    cout << " Inaltime:" << inaltime_c <<endl;
    cout<< " Aria:" << aria() << " Perimetru:" << perimetru() << " Volum:" << volum() << endl;
}