#include "pch.h"
#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{
	cout << "Animal constructor called" << endl;
}


Animal::~Animal()
{
	cout << "Animal destructor called" << endl;
}

void Animal::Speak()
{
	cout << "Animal speaks." << endl;
}

void Animal::SetName(string name)
{
	this->name = name;
}

string Animal::GetName()
{
	return this->name;
}
