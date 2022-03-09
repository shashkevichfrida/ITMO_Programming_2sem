#include <iostream>
#include "Header.h"

Polynome::Polynome() = default;

Polynome::~Polynome() = default;

Polynome::Polynome(double a, double b, double c) : a1(a), b1(b), c1(c) {}


Polynome::Polynome(const Polynome & a)
{
    this->a1 = a.a1;
    this->b1 = a.b1;
    this->c1 = a.c1;
}

double Polynome::point(Polynome m, double x)
{
    return m.a1 * x * x + m.b1 * x + m.c1;
}

double Polynome::rootsAmount(Polynome & m)
{
    double D;
    D =m.b1 * m.b1  - 4 * m.a1 * m.c1;
    if (D > 0)
        return 2;
    if (D == 0)
        return 1;
    if (D < 0)
        return 0;
}

void Polynome::roots(Polynome m, double& root1, double& root2)
{
    double D = m.b1 * m.b1 - 4 * m.a1 * m.c1;
    if (rootsAmount(m) == 2)
    {
        root1 = (m.b1 * (-1) + sqrt(D)) / (2 * m.a1);
        root2 = (m.b1 * (-1) - sqrt(D)) / (2 * m.a1);
    }
    if (rootsAmount(m) == 1)
    {
        root1 = (m.b1 * (-1)) / (2 * m.a1);
        root2 = (m.b1 * (-1)) / (2 * m.a1);
    }

    if (rootsAmount(m) == 0)
    {
        root1 = 0;
        root2 = 0;
    }
}

void Polynome::maxmin(Polynome m, double& min, double& max, double& flmax, double& flmin)
{
    bool k;
    if (m.a1 < 0)
        k = false;
    else
        k = true;

    if (k)
    {
        min = (4 * m.a1 * m.c1 - pow(m.b1, 2)) / 4 * m.a1;
        flmax++;
        
    }
    else
    {
        max = (4 * m.a1 * m.c1 - pow(m.b1, 2)) / 4 * m.a1;
        flmin++;
    }

}

