#include "stdafx.h"
#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
	this->x = x;
	this->y = y;
}

Vector2 & Vector2::operator+(const Vector2& clone) const
{
	Vector2 vector2(x + clone.x, y + clone.y);

	return (vector2);
}


Vector2::~Vector2()
{
	cout << this->x << "," << this->y << endl;
}
