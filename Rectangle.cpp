#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

void Rectangle::Size() const {
    printf("長方形の面積: %.2f\n", width * height);
}

void Rectangle::Draw() const {
    printf("幅 %.2f、高さ %.2f の長方形を描画します\n", width, height);
}
