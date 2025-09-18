#pragma once
class Transform
{
public:
	float x = 0;
	float y = 0;
	float z = 0;

	void Rotate(int x);

	void Rotate(float x);

	void Rotate(float x,float y);

};
