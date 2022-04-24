#pragma once
// ��������� "�������������� ������".
class IGeoFig {
public:
    // �������.
    virtual double square() const { return 0; }
    // ��������.
    virtual double perimeter() const { return 0; }
};

// ������
class CVector2D {
public:
    double x, y;
};

// ��������� "���������� ������".
class IPhysObject {
public:
    // �����, ��.
    virtual double mass() const { return 0; }
    // ���������� ������ ����, �.
    virtual CVector2D position() const { return { 0, 0 }; }
    // ��������� �� �����.
    bool operator==(const IPhysObject& ob) const {
        if (mass() == ob.mass())
            return true;
        return false;
    }
    // ��������� �� �����.
    bool operator<(const IPhysObject& ob) const {
        if (mass() < ob.mass())
            return true;
        return false;
    }
};

// ��������� "������������"
class IPrintable {
public:
    // ���������� �� ������
    // (�������� � ��������� ���� ��������� ������).
    virtual void draw() const {}
};

// ��������� ��� �������, ������� ����� ������ ����� ������ � �������������.
class IDialogInitiable {
    // ������ ��������� ������� � ������� ������� � �������������.
    virtual void initFromDialog() {}
};

// ��������� "�����"
class BaseCObject : public IGeoFig, public IPhysObject, public IPrintable, public IDialogInitiable {
public:
    // ��� ������ (���� ������).
    virtual const char* classname() const { return "none"; }
    // ������ ���������� ������.
    virtual size_t size() const { return 0; }
};

