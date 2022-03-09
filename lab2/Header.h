#pragma once
#include <cmath>

class Polynome
{

private:
    double a1;
    double b1;
    double c1;

public:
    Polynome();// конструктор по умолчанию
    ~Polynome();
    Polynome(double, double, double);
    Polynome(const Polynome&);//констуктор копирования
    double point(Polynome, double);
    double rootsAmount(Polynome&);
    void roots(Polynome, double&, double&);
    void maxmin(Polynome, double&, double&, double&, double&);
};