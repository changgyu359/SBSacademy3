#include "Skeleton.h"

#include "stdafx.h"

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

Skeleton::~Skeleton()
{
	cout << "���̷��� �Ҹ�" << endl;
}
