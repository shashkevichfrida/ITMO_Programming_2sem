#pragma once
#include "Interface.h"

class Trapezoid : public BaseCObject {
public:
    void initFromDialog() override;
    CVector2D position() const override;
    double mass() const override;
    double square() const override;
    double perimeter() const override;
    void draw() const override;
    const char* classname() const override;
    size_t size() const override;
private:
    double edge1, edge2, base1, base2, h;
    CVector2D center;
    double _mass;
};
