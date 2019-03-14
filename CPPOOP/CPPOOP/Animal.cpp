#include "pch.h"
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal()
{
	cout << "Animal constructor called" << endl;
	//count++;
}

Animal::~Animal()
{
	cout << "Animal destructor called" << endl;
	//count--;
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
