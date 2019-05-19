#include "Deduction_t_c.h"
#include <cmath>


Deduction_t_c::Deduction_t_c(double t, double a):Truangle::Truangle(t), Circle::Circle(a) {};
double Deduction_t_c::get_square () const {
    return abs(Truangle::get_square() - Circle::get_square());
}

