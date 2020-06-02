#include <iostream>
#include <cmath>
#include "frac.h"
#include "float_comp.h"

using namespace std;

int main() {
    float a(0);
    float b(0.1);
    float c(1);
    for(int k = 0; k < 10; k++) {
        a += b;
    }
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << ((a == c) ? "a jest równe 1 (operator ==)" : "a jest różne 1 (operator ==)" )<< endl;
    cout << (is_equal(a, c) ? "a jest równe 1 (funkcja is_equal)" : "a jest różne 1 (funkcja is_equal)" )<< endl;
	cout << "Jestem pod KDevelop!";


    return 0;

}
