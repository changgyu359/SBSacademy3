#pragma once
class funiture
{
protected:
	const char* name;

public:
	funiture();
	virtual void Interact() = 0;
	virtual ~funiture();
};

