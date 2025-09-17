#include "Slime.h"

#include<iostream>

using namespace std;

Slime::Slime()
{
	name = "slime";
	health = 50;
	attack = 1;
	defense = 1;
	
}


void Slime::Describe()
{
	Monster::Describe();
	cout << "¸»¶û¸»¶ûÇÑ ¸»¶ûÀÌ.\n" << endl;
}
