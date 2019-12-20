#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
private:
    int id;
    char *nume;
    char grupa_serie[6]; //de ex: ”321AA”
    int note_sem_1[5]; //notele obtinute la MN, POO, SS,  TCAI, Electronica
public:
    void student::init();            //functie in care aloc spatiu campurilor(unde e cazul)
    // si apoi citesc de la tastatura valori pentru ele
    void afisare() const;    //functie in care afisez campurile; fara sa le modific (const dupa functie
    //nu permite modificarea variabilei cu care voi face apelul)
    void modific(const char []);
    //functie cu care pot modifica grupa_serie
    void modific(const int, const int); //functie cu care pot modifica nota la material 0->4, primul
    //parametru este pozitia notei pe care o modific, al doilea parametru e noua valoare
    void copie(const student&);
    void grupa();
    //copiaza camp cu camp din variabila student data ca parametru
    //in variabila student cu care e apelata functia
//adaugati orice functie vi se pare necesara
    float getMedieSem() const;
};

typedef struct student stud;


void student::init() {
    cout << "Introdu ID: ";
    cin >> id;
    cin.get();
    nume = new char[30];
    cout << "Introdu numele: ";
    cin.getline(nume,30);
    cout << "Introdu grupa si seria: ";
    cin.getline(grupa_serie,6);
    cout << "Introdu notele: ";
    for(int j = 0; j < 5; j++) {
        cin >> note_sem_1[j];
    }
}

void stud::afisare()const{
    cout<< "Id: "<<id<<endl<<"Nume: "<<nume<<endl<<"Grupa si seria: "<<grupa_serie<<endl;
    for(int i=0;i<5;i++)
        cout<<"Nota "<<i+1<<" este:"<<note_sem_1[i]<<endl;
}

void stud::modific(const char nnume[]) {
    strcpy(grupa_serie, nnume);
}

void student::modific(const int poz, const int nota) {
    note_sem_1[poz] = nota;
}

void stud::copie(const stud & cache)
{
    id = cache.id;
    strcpy(nume, cache.nume);
    strcpy(grupa_serie, cache.grupa_serie);
    for(int i = 0; i < 5; ++i)
        note_sem_1[i] = cache.note_sem_1[i];
}

float (stud::getMedieSem() const) {
    int suma = 0;
    for(int i = 0; i < 5; ++i)
        suma += note_sem_1[i];
    return ((float)suma/5);
}

void stud::grupa() {
    if (strstr(grupa_serie,"AA")) afisare();
}

int main() {
    stud *a;
    int nr_stud;
    cout<<"Numar de studenti: ";
    cin>>nr_stud;
    a = new stud[nr_stud];
    for (int i = 0; i <nr_stud; i++) {
        cout<<"Studentul nr."<<i+1<<endl;
        a[i].init();
    }

    for (int i = 0; i < nr_stud-1; i++)
        for(int j=i+1; j<nr_stud; j++) {
            if (a[i].getMedieSem() > a[j].getMedieSem())
                swap(a[j], a[i]);
        }
    cout << "Studentii cu media sortata: " << "\n";
    for (int i = 0; i <nr_stud; i++) {
        a[i].afisare();
    }

    cout << "Studentii din seria AA sunt: "<< "\n";
    for (int i = 0; i <nr_stud; i++) {
        a[i].grupa();
    }


    // a[0].modific("333CC");
    // a[0].modific(1,10);
    return 0;
}
