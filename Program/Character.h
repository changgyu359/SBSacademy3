#pragma once
class Character
{
public:
	weak_ptr<Character> cha;
	Character();
	void Partner(const weak_ptr<Character>& name);
	~Character();

};

