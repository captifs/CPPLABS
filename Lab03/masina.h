class Masina{
    char* marca;
    char* model;
    char numar[8];
    int usi;

public:
    Masina();
    Masina(char*,char*,char[8],int);
    Masina(const Masina&);
    ~Masina();
    void Afisare()const;
    void Modif(char*,char*,char[8],int);
    void Modif(const Masina&);
    int getUsi()const;
    char* getModel()const;

};