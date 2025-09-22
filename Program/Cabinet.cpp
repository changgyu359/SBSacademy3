#include "stdafx.h"
#include "Cabinet.h"

Cabinet::Cabinet()
{
	cout << "Created Cabinet" << endl;
}

void Cabinet::Interact()
{
	cout << "the cabinet open" << endl;
}

Cabinet::~Cabinet()
{
	cout << "Destroy Cabinet" << endl;
}
