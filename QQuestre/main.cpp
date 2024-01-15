#include <iostream>
#include "Flat.h"
#include "Overcoat.h"

using namespace std;

int test_Flat()
{
    Flat flat1(70.0, 1000000.0);
    Flat flat2(70.0, 1200000.0);
    Flat flat3(75.0, 900000.0);

    if (flat1 == flat2) {
        cout << "������� ������� flat1 � flat2 �����\n";
    }

    flat1 = flat2;  // ������������ flat2 � flat1

    if (flat1 > flat3) {
        cout << "���� flat1 ����, ��� ���� flat3\n";
    }
    return 0;
}


int test_Overcoat()
{

    Overcoat coat1("palto_lacoste", 4500.0);
    Overcoat coat2("palto_lacoste", 2000.0);
    Overcoat coat3("coat_Jack", 1000.0);

    if (coat1 == coat2) {
        cout << "���� ������ coat1 � coat2 ����� " << coat1.get_type() << endl;
    }

    coat1 = coat2;  // ������������ coat2 � coat1

    if (coat1 > coat3) {
        // ���� ������ coat1 ������, ��� ���� ������ coat3
    }
    return 0;
}


int main(int argc, char** argv) {
    setlocale(LC_ALL, "RU");
    test_Overcoat();
    test_Flat();
}