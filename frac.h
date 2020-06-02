#ifndef __FRAC
#define __FRAC

#include <iostream>
class frac {
private:
    char znak[8]; //

public:
    int x;
    int y;

//konstruktory
    frac();
    frac(int);
    frac(int, int);
    frac(const frac &u);

//operator przypisania
    frac & operator= (const frac &a);

//funkcje
    void present();
    void skroc();

};

frac operator+ (const frac &a, const frac &b);
frac operator* (const frac &a, const frac &b);


#endif// __FRAC

