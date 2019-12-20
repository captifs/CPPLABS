#include "clase.h"
#include <iostream>
using namespace std;

int main()
{
    Persoana p((char*)"Vasile",20);
    Persoana b;
    p.afisare();
    cout<<endl;
    Angajat a((char*)"Catalin", 20, 2700);
    Angajat aa,bb(aa);
    a.afisare();

    cout<<endl<<"Urmeaza Angajat_Pt:"<<endl;
    Angajat_Pt *pt, pt1;
    pt = new Angajat_Pt[1000];
    pt[0] = Angajat_Pt((char*)"Calin", 20, 2000, 4, (char*)"Onest");
    pt[1] = Angajat_Pt((char*)"Mihai", 21, 35000, 8, (char*)"Mincinos");
    pt[2] = Angajat_Pt((char*)"Vasile", 25, 2500, 6, (char*)"Destept");
    pt[3] = Angajat_Pt((char*)"Iurie", 35, 5000, 11, (char*)"Interesant");

    for (int i = 0; i < 4; ++i) {
        pt[i].afis();
        cout<<endl;
    }

    for (int i = 0; i < 4; ++i)
        for(int j = i+1; j < 3; j++)
            if(pt[i].getNr_ore() > pt[j].getNr_ore()) {
                pt1 = pt[i];
                pt[i] = pt[j];
                pt[j] = pt1;
            }
    cout<<endl <<"Angajati part time sortati dupa nr de ore"<<endl;
    for (int i = 0; i < 4; ++i) {
        pt[i].afis();
        cout<<endl;
    }
    cout<<endl<<"Angajati part time cu salariu mai mare ca 1000 si varsta 21: "<<endl;
    for (int i = 0; i < 4; ++i) {
        if (pt[i].getVs() == 21 && pt[i].getSalariu() > 1000)
            pt[i].afis();
    }
    return 0;
}