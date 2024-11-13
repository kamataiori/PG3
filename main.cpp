#include "Circle.h"
#include "Rectangle.h"

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    IShape* shapes[] = { &circle, &rectangle };

    for (const auto* shape : shapes) {
        shape->Size();
        shape->Draw();
    }

    return 0;
}
