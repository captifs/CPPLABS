#include <iostream>
using namespace std;

class complex {
    float re;
    float im;
public:
    complex(float = 0, float = 0);

    ~complex();

    complex(const complex &);

    const complex& operator=(const complex &);
    complex& operator+=(const complex &);
    complex& operator*=(const complex &);
    complex& operator/=(const complex &);
    complex& operator-();

    friend  const complex operator+(const complex &x, const complex &y);
    friend  const complex operator-(const complex &x, const complex &y);
    friend complex operator*(const complex &x, const complex &y);
    friend complex operator/(const complex &x, const complex &y);



    friend bool operator==(const complex &x, const complex &y);

    friend bool operator!=(const complex &x, const complex &y);


    complex& operator--();
    complex operator--(int);
    friend ostream& operator<<(ostream& print,const complex &c);

};


class matrice{
    int l,c;
    complex **buf;
public:
    matrice();
    matrice(int l, int c, complex **mat);
    matrice(const matrice&);
    matrice& operator=(const matrice&);
    ~matrice();
    friend ostream& operator<<(ostream&, const matrice&);
    matrice& operator+=(const matrice&);
    friend bool operator==(const matrice&,const matrice&);
    friend bool operator!=(const matrice&, const matrice&);
    friend const   matrice operator+(const matrice &p,const matrice &n);
    void afis() const;

};
