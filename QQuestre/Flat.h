#pragma once

//2�������
/*������� ����� Flat (��������).
����������� ������������� ���������:
1. �������� �� ��������� �������� ������� (��������
==).
2. �������� ������������ ������ ������� � ������
(�������� =).
3. ��������� ���� ������� �� ���� (��������>).*/

class Flat {
    double area;
    double price;

public:
    Flat(double area, double price)
        : area(area), price(price) {}

    bool operator==(const Flat& other) const {
        return area == other.area;
    }

    Flat& operator=(const Flat& other) {
        area = other.area;
        price = other.price;
        return *this;
    }

    bool operator>(const Flat& other) const {
        return price > other.price;
    }
};
