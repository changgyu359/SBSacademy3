#include "Slime.h"

#include "stdafx.h"

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
	cout << "���������� ������.\n" << endl;
}

Slime::~Slime()
{
	cout << "������ �Ҹ�" << endl;
}
