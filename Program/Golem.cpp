#include "Golem.h"

#include<iostream>

using namespace std;

Golem::Golem()
{
	name = "golem";
	health = 250;
	attack = 10;
	defense = 5;

}

void Golem::Describe()
{
	Monster::Describe();
	cout << "유적의 수호자,매우 단단하다.\n" << endl;
}
