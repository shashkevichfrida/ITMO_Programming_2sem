#pragma once

#include "Interface.h"

class Rectangle : public BaseCObject {
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
    double height, width;
    CVector2D center;
    double _mass;
};
