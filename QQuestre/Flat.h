#pragma once

//2задание
/*Создать класс Flat (квартира).
Реализовать перегруженные операторы:
1. Проверка на равенство площадей квартир (операция
==).
2. Операцию присваивания одного объекта в другой
(операция =).
3. Сравнение двух квартир по цене (операция>).*/

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
