#pragma once
#include "Monster.h"
class Skeleton :
    public Monster
{
public:
    Skeleton();
    virtual void Describe() override;
    virtual ~Skeleton() override;
};

