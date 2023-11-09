#pragma once
#include "B1.h"
#include "B2.h"
class D1 :
    public B1, public B2
{
    int c;
public:
    D1(int x);
    void show() const;
};

