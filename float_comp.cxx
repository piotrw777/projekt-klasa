#include <iostream>
#include <cmath>
#include "float_comp.h"
#define ERROR 1e-6

using namespace std;

bool is_equal (float a, float b) {
	return (abs(a - b) < ERROR);
}
