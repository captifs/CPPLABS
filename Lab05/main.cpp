#include <iostream>
#include "complex.h"




int main() {
    complex c1(2,3);
    complex c2(2,3);
    cout<<"Afisez c1"<<endl;
    cout<<c1;
    cout<<"Afisez c2"<<endl;
    cout<<c2;

    complex c5;
    cout<<"Testez constructorul = , c5 = c2"<<endl;
    c5 = c2;
    cout<<c5;
    cout<<"Testez constructorul += , c5 += c1"<<endl;
    c5+=c1;

    cout<<"Testez operator == "<<endl;
    if (c1 == c2)
        cout<<"Egale"<<endl;
    else cout<<"Diferite"<<endl;

    cout<<"Testez operatorul !="<<endl;
    if (c1 != c5)
        cout<<"Nu sunt egale"<<endl;
    else cout<<"Sunt egale"<<endl;

    cout<<"Testez operatorul +"<<endl;
    complex c4;
    c4 = c1 + c2;
    cout<<c4<<endl;



    return 0;
}