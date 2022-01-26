#pragma once

#include <cstdio>

struct Value
{
    Value()
    {
        mValue = new int(0);
        printf("created: %p\n", mValue);
    }

    ~Value()
    {
        printf("destroying: %p\n", mValue);
        delete mValue;
    }

    int *mValue = nullptr;
};

struct static4data
{
    static Value value;

    static void fun();
};
