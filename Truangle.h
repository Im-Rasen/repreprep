#include "Figure.h" // равносторонний

class Truangle : public Figure
{
    double t = 0;
public:
    Truangle(double t);
    virtual double get_square () const;
};
