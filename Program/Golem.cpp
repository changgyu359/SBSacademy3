#include "Golem.h"

#include "stdafx.h"

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
	cout << "������ ��ȣ��,�ſ� �ܴ��ϴ�.\n" << endl;
}

Golem::~Golem()
{
	cout << "Golem �Ҹ�" << endl;
}
