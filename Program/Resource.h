#pragma once
class Resource
{

public:
	shared_ptr<Resource> resource;
	Resource();
	~Resource();

	void Share(shared_ptr<Resource> & name);
};

