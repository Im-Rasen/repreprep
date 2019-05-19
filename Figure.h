#ifndef Figure_h
#define Figure_h

class Figure
{
public:
    virtual double get_square() const = 0;
    virtual ~Figure() {}
};

#endif