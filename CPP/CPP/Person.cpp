#include "pch.h"
#include "Person.h"
#include <sstream>

Person::Person() : name("undefined"), age(0)
{
}

Person::Person(string name)
{
	this->name = name;
}

/*
Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}
*/

//using parameter list to constructor
Person::Person(string name, int age) : name(name), age(age)
{
}

Person::~Person()
{
	cout << "Person Destructor" << endl;
}

void Person::SetName(string name)
{
	this->name = name;
}

string Person::GetName()
{
	return name;
}

void Person::SetAge(int age)
{
	this->age = age;
}

int Person::GetAge()
{
	return this->age;
}

string Person::ToString()
{
	stringstream ss;
	ss << "Name: " << name << "; Age: " << age << endl;
	return ss.str();
}
