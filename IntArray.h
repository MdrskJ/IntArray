//
// Created by modJ on 20.03.2024.
//

#include <cstdlib>

#ifndef TEST_STRUCT_AND_CLASS_INTARRAY_H
#define TEST_STRUCT_AND_CLASS_INTARRAY_H


class IntArray {

protected:
    int* _a;
    int _size;
    static const int DEFAULT_SIZE_ARRAY = 100;

    void Init(int size, const int* array);

public:
    explicit IntArray(int size = DEFAULT_SIZE_ARRAY) { Init(size, nullptr); };
    IntArray(const int* array, int size) { Init(size, array); };
    IntArray(const IntArray &array) { Init(array._size, array._a); };
    IntArray(int size, int val);

    virtual ~IntArray() { delete[] _a; };

    virtual int& operator[](int index);
    void operator=(IntArray& other);
    bool operator==(IntArray& other);
    bool operator!=(IntArray& other);

    int* begin() { return _a; }
    int* end() { return _a + _size; }
    int size() { return _size; }
    int max();
    int min();
    void sort();
    int find(int val);
};

#endif //TEST_STRUCT_AND_CLASS_INTARRAY_H
