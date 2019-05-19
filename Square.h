#include "Figure.h"

class Square : public Figure
{
    double a = 0;
public:
    Square(double s);
    virtual double get_square () const;
};
