#pragma once

struct Value
{
    Value()
    {
        mValue = new int(0);
    }

    ~Value()
    {
        delete mValue;
    }

    int *mValue = nullptr;
};

struct static4data
{
    static Value value;

    static void fun();
};
