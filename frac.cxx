#include<iostream>
#include "frac.h"

using namespace std;

int nwd(int a, int b) {
    int c;
    while(b) {
        c = a;
        a = b;
        b = c % b;
    }
    return a;
}

frac::frac() {

}

frac::frac(int) {

}

frac::frac(int, int) {

}

frac::frac(const frac &u) {

}



frac & frac::operator=(const frac &a) {

}

void frac::present() {

}

void frac::skroc() {

}

frac operator+(const frac &a, const frac &b) {

}

frac operator*(const frac &a, const frac &b) {

}
