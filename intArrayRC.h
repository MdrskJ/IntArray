//
// Created by modor on 03.04.2024.
//

#include "IntArray.h"

#ifndef TEST_STRUCT_AND_CLASS_INTARRAYRC_H
#define TEST_STRUCT_AND_CLASS_INTARRAYRC_H


class IntArrayRC: public IntArray {

private:
    void check(int index);

public:
    explicit IntArrayRC(int size = DEFAULT_SIZE_ARRAY);
    IntArrayRC(const int* array, int size);
    explicit IntArrayRC(const IntArray &array);
    IntArrayRC(int size, int val);

    virtual int& operator[](int index);
};


#endif //TEST_STRUCT_AND_CLASS_INTARRAYRC_H
