#include "Figure.h"
#include "Truangle.h"
#include "Circle.h"

class Deduction_t_c : public Truangle, public Circle{
public:
    Deduction_t_c(double t, double r);
    virtual double get_square () const;
};
