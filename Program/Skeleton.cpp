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
	cout << "���� ���� ���Ѹ��� ���ٱͿ� ���Ҵ�. �׷����� ���ٱʹ� ������ ���� ����.\n" << endl;
}
