#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <cstdio>
#include "IShape.h"

class Rectangle : public IShape {
private:
    double width, height;

public:
    Rectangle(double w, double h);
    void Size() const override;
    void Draw() const override;
};

#endif
