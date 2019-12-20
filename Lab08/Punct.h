#include <iostream>
#include <cstring>
using namespace std;

class Punct {
protected:
    int x, y, z;
    char* figura;
public:
    Punct():x(0) , y(0), z(0), figura(NULL){}
    Punct(char* f, int xx, int yy, int zz):x(xx), y(yy), z(zz) {
        if( f == NULL)
            figura = NULL;
        else {
            figura = new char[strlen(f) + 1];
            strcpy(figura, f);
        }
    }
    virtual float aria(){
        return 0;
    }
    virtual float perimetru(){
        return 0;
    }

    virtual float volum(){
        return 0;
    }

    virtual ~Punct(){
        if(this->figura != NULL) {
            delete[]figura;
            figura = NULL;
        }
    }

    Punct& operator=(const Punct&);
    Punct(const Punct&);
    virtual void afisare();
};

class Patrat:public Punct {
protected:
    int latura;
public:
    Patrat():Punct(),latura(0) {}
    Patrat(char* f,int xx, int yy, int zz, int lat):Punct(f, xx, yy, zz), latura(lat) {}
    Patrat(Punct p, int lat): Punct(p), latura(lat) {}
    float aria(){
        return latura * latura;
    }
    float perimetru(){
        return 4 * latura;
    }

    virtual float volum(){
        return 0;
    }

    void afisare();
    ~Patrat() {}
    //Dreptunghi& operator=(const Dreptunghi&);
    //Dreptunghi(const Dreptunghi&);
};

class Prisma:public Patrat {
    int inaltime;
public:
    Prisma():Patrat(), inaltime(0) {}
    Prisma(char* f, int xx, int yy, int zz, int lat, int h):Patrat(f, xx, yy, zz, lat), inaltime(h) {}
    Prisma(Patrat d, int h):Patrat(d), inaltime(h) {}
    ~Prisma() {}
    float aria(){
        return 2*latura*(2*inaltime+latura);
    }
    float perimetru(){
        return 24*latura;
    }

    virtual float volum(){
        return latura*latura*inaltime;
    }

    void afisare();
};

class Cerc:public Punct{
protected:
    int raza;
public:
    Cerc():Punct(), raza(0) {}
    Cerc(char* f, int xx, int yy, int zz, int r):Punct(f, xx, yy, zz), raza(r) {}
    Cerc(Punct p, int r):Punct(p), raza(r) {}
    ~Cerc() {}
    float aria(){
        return 3.14 * raza * raza;
    }
    float perimetru(){
        return 3.14 * raza;
    }

    virtual float volum(){
        return 0;
    }

    void afisare();


};
class Cilindru:public Cerc {
    int inaltime_c;
public:
    Cilindru():Cerc(), inaltime_c(0) {}
    Cilindru(char* f, int xx, int yy, int zz, int r, int h):Cerc(f, xx, yy, zz, r), inaltime_c(h) {}
    Cilindru(Cerc c, int h): Cerc(c), inaltime_c(h) {}
    ~Cilindru() {}
    float aria(){
        return 2 * 3.14 * raza * (raza + inaltime_c);
    }
    float perimetru(){
        return 0;
    }

    virtual float volum(){
        return 3.14 * raza * inaltime_c;
    }

    void afisare();
};




