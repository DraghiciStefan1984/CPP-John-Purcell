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

	Person person1;
	person1.SetName("Mike");
	cout << person1.ToString() << endl;

	Person person2("Tim");
	cout << person2.ToString() << endl;

	Person person3("Ana", 25);
	cout << person3.ToString() << endl;

	return 0;
}