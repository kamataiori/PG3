#ifndef ISHAPE_H
#define ISHAPE_H

class IShape {
public:
    virtual void Size() const = 0;
    virtual void Draw() const = 0;
    virtual ~IShape() = default;
};

#endif
