#include "Figure.h"

class Circle : public Figure
{
    double r = 0;
public:
    Circle(double r);   
    virtual double get_square () const;
};
