#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

void Circle::Size() const {
    printf("円の面積: %.2f\n", M_PI * radius * radius);
}

void Circle::Draw() const {
    printf("半径 %.2f の円を描画します\n", radius);
}
