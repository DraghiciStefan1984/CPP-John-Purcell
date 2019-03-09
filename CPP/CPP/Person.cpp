#include "pch.h"
#include "Person.h"


Person::Person()
{
}


Person::~Person()
{
}

void Person::SetName(string name)
{
	this->name = name;
}

string Person::GetName()
{
	return name;
}

string Person::ToString()
{
	return "Person name is " + name;
}
