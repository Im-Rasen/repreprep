#include "Figure.h"
#include "Circle.h"
#include "Square.h"

class Deduction_c_s : public Circle, public Square{
public:
    Deduction_c_s(double r, double a);
    virtual double get_square () const;
};
