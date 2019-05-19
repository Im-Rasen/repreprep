#include "Circle.h"
#include <cmath>

    Circle::Circle(double r): r(r) {};
    double Circle::get_square () const {
		return M_PI * r * r;
    }
