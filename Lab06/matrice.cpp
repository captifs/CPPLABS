#include <iostream>
#include "matrice.h"
using namespace std;

complex::complex(float rl, float img) {
    re = rl;
    im = img;
}
complex::complex(const complex &x) {
    re = x.re;
    im = x.im;
}


complex::~complex() {
    cout<<"D\t";
}

const complex& complex::operator=(const complex &x) {
    re = x.re;
    im = x.im;
    return *this;
}
complex& complex::operator+=(const complex &x){
    re+=x.re;
    im+=x.im;
    return *this;
}

complex& complex::operator*=(const complex &x) {
    re*=x.re;
    im*=x.im;
    return *this;
}

complex& complex::operator/=(const complex &x) {
    re/= x.re;
    im/= x.im;
    return *this;
}

complex& complex::operator-() {
    re = -re;
    im = - im;
    return *this;
}
const complex operator+(const complex &x, const complex &y)  {
    return complex(x.re+y.re,x.im+y.im);
}

const complex operator-(const complex &x, const complex &y) {
    return complex(x.re-y.re,x.im-y.im);
}

complex operator*(const complex &x, const complex &y) {
    complex turn;
    turn.re = (x.re * y.re) - (x.im * y.im);
    turn.im = (x.re * y.im) + (y.re * x.im);
    return turn;
}

complex operator/(const complex &x, const complex &y) {
    complex ret;
    ret.re = (x.re*y.re + x.im*y.im) / (y.re*y.re + y.im*y.im);
    ret.im = (x.im*y.re + x.re*y.im) / (y.re*y.re + y.im * y.im);
    return ret;
}


bool operator==(const complex &x, const complex &y) {
    return x.re == y.re && x.im == y.im;
}

bool operator!=(const complex &x, const complex &y) {
    if ((x.re != y.re || x.im != y.im))
        return true;
    else return false;
}

//prefix
complex& complex::operator--() {
    re--;
    im--;
    return *this;
}
// postfix
complex complex::operator--(int i) {
    re --;
    im--;
    return *this;
}

ostream& operator<<(ostream& print,const complex &c){
    print<<c.re<<" "<<c.im<<endl;
    return print;
}
//----------------------------------------------------------------
//                  MATRICE

matrice::matrice() {
    if (buf) delete[] buf;
    else {
        buf = new complex *[l];
        for (int i = 0; i < l; i++) {
            this->buf[i] = new complex[c];
            for (int j = 0; j < c; j++)
                this->buf[i][j];
        }
    }
}

matrice::matrice(int l, int c, complex**mat)
{
    this->l = l;
    this->c = c;
    this->buf = new complex*[l];
    for(int i = 0; i < l; i ++) {
        this->buf[i] = new complex[c];
        for(int j = 0; j < c; j++)
            this->buf[i][j] = mat[i][j];
    }
}

matrice::matrice(const matrice &cop) {
    this->buf = NULL;
    *this = cop;
}

matrice::~matrice(){
    if (buf) {
        for(int i = 0; i < l; i++)
            delete [] buf[i];
        delete [] buf;

    }
    buf = NULL;
}

matrice& matrice::operator=(const matrice &p)
{
    l = p.l;
    c = p.c;
    buf = new complex*[l];
    for(int i = 0; i < l; i++) {
        buf[i] = new complex[c];
        for(int j = 0; j < c; j++)
            buf[i][j] = p.buf[i][j];
    }
    return *this;
}

void matrice::afis() const
{
    cout<<"Afisez matricea: ";
    cout<<endl;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++)
            cout<<buf[i][j]<<" ";
        cout<<endl;
    }
}




matrice& matrice::operator+=(const matrice &p)
{
    if(l != p.l || c != p.c)
    {
        cout<<"Adunarea nu poate fi facuta!";
        return *this;
    }

    for(int i = 0; i < l; i++)
        for(int j = 0; j < c; j++)
            buf[i][j] += p.buf[i][j];
    return *this;
}

bool operator==(const matrice &p1, const matrice &p2)
{
    if(p1.l != p2.l || p1.c != p2.c)
    {
        cout<<"Matrici diferite(dimensiuni diferite)";
        return false;
    }

    for(int i = 0; i < p1.l; i++)
        for(int j = 0; j < p1.c; j++)
            if(p1.buf[i][j] != p2.buf[i][j])
                return false;

    return true;
}

bool operator!=(const matrice &p1, const matrice &p2)
{
    if(p1.l != p2.l || p1.c != p2.c)
    {
        cout<<"Matrici diferite(dimensiuni diferite)";
        return false;
    }
    int k = 0;
    for(int i = 0; i < p1.l; i++)
        for(int j = 0; j < p1.c; j++)
            if(p1.buf[i][j] != p2.buf[i][j])
                k++;
    if( k != 0)
        return true;
    else
        return false;
}

const matrice  operator+(const matrice &p,const matrice &n) {
    if (p.l != n.l || p.c != n.c) {
        cout << "Nu putem aduna matricele!(dimensiuni diferite)";
        matrice aux;
        return aux;

    } else {
        matrice matrice_rezultata;
        matrice_rezultata.l = p.l;
        matrice_rezultata.c = p.c;
        matrice_rezultata.buf = new complex *[p.l];
        for (int i = 0; i < p.l; i++) {
            matrice_rezultata.buf[i] = new complex[p.c];
            for (int j = 0; j < p.c; j++)
                matrice_rezultata.buf[i][j] = p.buf[i][j] + n.buf[i][j];
        }
        return matrice_rezultata;
    }
}

ostream& operator<<(ostream& out,const matrice& p){
    out<<"Linii: "<<p.l<<endl;
    out<<"Coloane "<<p.c<<endl;
    for(int i = 0; i < p.l ; i++){
        for(int j = 0 ;j < p.c; j++)
            out<<p.buf[i][j]<<" ";
        out<<endl;
    }
    return out;
}
