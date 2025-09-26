#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Created Character" << endl;
}


void Character::Partner(const weak_ptr<Character>& name)
{
	cha=name;
}

Character::~Character()
{
	cout << "Destroy Character" << endl;
}
