#include "Monster.h"
#include "stdafx.h"

void Monster::Stat()
{
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Attack: " << attack << endl;
	cout << "Defense: " << defense << endl;
}

void Monster::Describe()
{
	cout << "설명:";
}

Monster::~Monster()
{
	cout << "몬스터 소멸" << endl;
}
