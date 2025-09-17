#include "Monster.h"

#include<iostream>

using namespace std;

void Monster::Stat()
{
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Attack: " << attack << endl;
	cout << "Defense: " << defense << endl;
}

void Monster::Describe()
{
	cout << "Ό³Έν:";
}