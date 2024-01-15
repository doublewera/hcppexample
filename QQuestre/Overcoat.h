#pragma once

//1задание
/*Создать класс Overcoat (верхняя одежда).
Реализовать перегруженные операторы:
1. Проверка на равенство типов одежды (операция = =).
2. Операцию присваивания одного объекта в другой
(операция =).
3. Сравнение по цене двух пальто одного типа (операция>).*/
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

