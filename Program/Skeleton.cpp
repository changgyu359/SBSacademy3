#include "Skeleton.h"

#include<iostream>

using namespace std;

Skeleton::Skeleton()
{
	name = "skeleton";
	health = 100;
	attack = 5;
	defense = 1;

}

void Skeleton::Describe()
{
	Monster::Describe();
	cout << "Á×Àº ÀÚÀÇ ¿øÇÑ¸¸ÀÌ »À´Ù±Í¿¡ ³²¾Ò´Ù. ±×·¡ºÃÀÚ »À´Ù±Í´Ï ¹«¼­¿ö ÇÏÁö ¸»ÀÚ.\n" << endl;
}
