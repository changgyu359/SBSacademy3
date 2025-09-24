#pragma once
template<typename T>
class Container
{
private:
	int size;
	int index;

	T* list;

public:




	Container(unsigned int allocatesize);
	
	void Push(T data);
	
	const int& Index();
	

	const T& operator [] (const int index);
	

	~Container();
	

};

