#include <iostream>
#include "complex.h"
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
