//
// Created by modJ on 20.03.2024.
//

#include "IntArray.h"
#include "algorithm"


void IntArray::Init(int size, const int* array) {
    _size = size;
    _a = new int[_size];
    if (array != nullptr) {
        for (int i = 0; i < _size; ++i) {
            _a[i] = array[i];
        }
    } else {
        for (int i = 0; i < _size; ++i) {
            _a[i] = 0;
        }
    }
}


IntArray::IntArray(int size, int val) {
    _size = size;
    _a = new int[_size];
    for (int i = 0; i < _size; ++i) {
        _a[i] = val;
    }
}


int& IntArray::operator[](const int index) {
    return _a[index];
}


void IntArray::operator=(IntArray& other) {
    if (_size != other._size) {
        delete[]_a;
        _size = other._size;
        _a = new int[_size];
    }
    for (int i = 0; i < _size; ++i) {
        _a[i] = other._a[i];
    }
}


bool IntArray::operator==(IntArray &other) {
    return _a == other._a;
}


bool IntArray::operator!=(IntArray &other) {
    return _a != other._a;
}


int IntArray::max() {
    int mx = INT_MIN;
    for (int i = 0; i < _size; ++i) {
        if (mx < _a[i]) mx = _a[i];
    }
    return mx;
}


int IntArray::min() {
    int mn = INT_MAX;
    for (int i = 0; i < _size; ++i) {
        if (mn > _a[i]) mn = _a[i];
    }
    return mn;
}


void IntArray::sort() {
    std::sort(_a, _a + _size);
}


int IntArray::find(const int val) {
    for (int i = 0; i < _size; ++i) {
        if (_a[i] == val) return i;
    }
    return -1;
}
