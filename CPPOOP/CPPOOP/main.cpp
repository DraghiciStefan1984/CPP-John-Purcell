// CPPOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Animal.h"
#include "Cat.h"
using namespace std;

int main()
{
	Animal * a1 = new Animal();
	a1->Speak();

	Cat * c1 = new Cat();
	c1->Speak();
	c1->Jump();

	delete a1;
	delete c1;

	return 0;
}