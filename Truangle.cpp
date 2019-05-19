#include "Truangle.h"
#include <cmath>

Truangle::Truangle(double t): t(t) {};
double Truangle::get_square () const {
    return t * t * sqrt(3) / 4;
}

