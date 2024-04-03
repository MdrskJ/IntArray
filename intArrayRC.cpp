//
// Created by modor on 03.04.2024.
//

#include "iostream"
#include "intArrayRC.h"


IntArrayRC::IntArrayRC(int size): IntArray(size) {};
IntArrayRC::IntArrayRC(const int* array, int size): IntArray(array, size) {};
IntArrayRC::IntArrayRC(const IntArray &array): IntArray(array) {};
IntArrayRC::IntArrayRC(int size, int val): IntArray(size, val) {};


void IntArrayRC::check(int index) {
    if (index >= 0 && index < _size) return;
    throw std::out_of_range("index IntArrayRC out of range");
}


int& IntArrayRC::operator[](const int index) {
    check(index);
    return _a[index];
}
