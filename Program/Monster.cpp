#include "Monster.h"

#include<iostream>

using namespace std;

void Monster::stat()
{
	cout << "Health: " << health << endl;
	cout << "Attack: " << attack << endl;
	cout << "Defense: " << defense << endl;
}