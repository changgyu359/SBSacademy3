#pragma once
#include "funiture.h"
class Cabinet :
    public funiture
{
public:
    Cabinet();
    virtual void Interact() override;
    ~Cabinet();
};


