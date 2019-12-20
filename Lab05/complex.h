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

