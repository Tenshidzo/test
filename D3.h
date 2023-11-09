#pragma once
#include "D1.h"
#include "D2.h"
class D3 :
    public D1, public D2
{
    int e;
public:
    D3(int x);
    void show() const;
};

