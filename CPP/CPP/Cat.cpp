#include "pch.h"
#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat()
{
	cout << "Cat constructor" << endl;
}


Cat::~Cat()
{
	cout << "Cat destructor" << endl;
}

void Cat::Speak()
{
	if (happy)
	{
		cout << "Miau" << endl;
	}
	else
	{
		cout << "Hisssss" << endl;
	}
}

void Cat::MakeHappy()
{
	happy = true;
}

void Cat::MakeSad()
{
	happy = false;
}
