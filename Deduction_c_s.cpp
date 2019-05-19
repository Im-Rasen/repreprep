#include "Deduction_c_s.h"
#include <cmath>


Deduction_c_s::Deduction_c_s(double t, double a): Circle::Circle(t), Square::Square(a) {};
double Deduction_c_s::get_square () const {
    return abs(Circle::get_square() - Square::get_square());
}
