#ifndef CIRCLE_H
#define CIRCLE_H

#include <cstdio>
#include <cmath>
#include "IShape.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Circle : public IShape {
private:
    double radius;

public:
    Circle(double r);
    void Size() const override;
    void Draw() const override;
};

#endif
