#pragma once
#include <cmath>

class Polynome
{

private:
    double a1;
    double b1;
    double c1;

public:
    Polynome();// ����������� �� ���������
    ~Polynome();
    Polynome(double, double, double);
    Polynome(const Polynome&);//���������� �����������
    double point(Polynome, double);
    double rootsAmount(Polynome&);
    void roots(Polynome, double&, double&);
    void maxmin(Polynome, double&, double&, double&, double&);
};