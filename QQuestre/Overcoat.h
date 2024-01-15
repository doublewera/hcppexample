#pragma once

//1�������
/*������� ����� Overcoat (������� ������).
����������� ������������� ���������:
1. �������� �� ��������� ����� ������ (�������� = =).
2. �������� ������������ ������ ������� � ������
(�������� =).
3. ��������� �� ���� ���� ������ ������ ���� (��������>).*/
#include <string>
using namespace std;

class Overcoat {
    string type;
    double price;

public:
    Overcoat(const std::string& type, double price)
        : type(type), price(price) {}

    bool operator==(const Overcoat& other) const {
        return type == other.type;
    }

    Overcoat& operator=(const Overcoat& other) {
        type = other.type;
        price = other.price;
        return *this;
    }

    bool operator>(const Overcoat& other) const {
        return type == other.type && price > other.price;
    }
};

