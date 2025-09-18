#pragma once
class Monster
{
protected:
	int health;
	int attack;
	int defense;

	const char* name;
	
public:
	void Stat();

	virtual void Describe();

	virtual ~Monster();
	
};

