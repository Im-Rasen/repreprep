#include "Deduction_s_t.h"
#include <cmath>


Deduction_s_t::Deduction_s_t(double a, double t): Square::Square(a), Truangle::Truangle(t) {};
double Deduction_s_t::get_square () const {
    return abs(Square::get_square() - Truangle::get_square());
}

