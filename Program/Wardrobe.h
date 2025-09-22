#pragma once
#include "funiture.h"
class Wardrobe :
    public funiture
{
public:
    Wardrobe();
    virtual void Interact() override;
    ~Wardrobe();
};

