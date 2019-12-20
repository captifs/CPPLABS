#include <iostream>

class Persoana{
protected:
    char* nume;
    float varsta;
public:
    Persoana():nume(NULL),varsta(0){};
    Persoana(const Persoana&);
    Persoana(char *n, float v):varsta(v) {
        if (!n) nume = NULL;
        else {
            nume = new char[strlen(n) + 1];
            strcpy(nume, n);
        }
    }
    Persoana& operator=(const Persoana&);
    void afisare();
    ~Persoana();

};

class Angajat:public Persoana{
protected:
    double salariu;

public:
    Angajat() : Persoana(), salariu(0) {};
    Angajat(char *n, float v, double s) : Persoana(n, v), salariu(s) {};
    void afisare();
    double getSalariu() const;

};

class Angajat_Pt:public Angajat{
private:
    int nr_ore;
    char* detalii;
public:
    Angajat_Pt():Angajat(),nr_ore(0),detalii(NULL){};
    Angajat_Pt(char *n, float v, double s, int ore, char *d):
            Angajat(n,v,s),nr_ore(ore) {
        if (!d) detalii = NULL;
        else {
            detalii = new char[strlen(d) + 1];
            strcpy(detalii, d);
        }
    };
    Angajat_Pt& operator=(const Angajat_Pt &);
    Angajat_Pt(const Angajat_Pt&);
    void afis();
    int getNr_ore() const;
    float getVs() const;
};


