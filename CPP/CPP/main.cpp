// CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include "Cat.h"
#include "Person.h"
using namespace std;

int main()
{
	Cat cat;
	cat.Speak();

	Person person;
	person.SetName("Mike");
	cout << person.GetName() << endl;

	return 0;
}