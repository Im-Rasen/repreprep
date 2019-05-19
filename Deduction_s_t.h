#include "Figure.h"
#include "Square.h"
#include "Truangle.h"

class Deduction_s_t : public Square, public Truangle{
public:
    Deduction_s_t(double a, double t);
    virtual double get_square () const;
};

