// ObjectSlicing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Parent
{
public:
	virtual void print() { cout << "parent" << endl; }
};

class Child :public Parent
{
public:
	void print() { cout << "child" << endl; }
};

int main()
{
	Child c1;
	Parent &p1 = c1;

	Parent p2 = Child();

	p1.print();
	p2.print();
	return 0;
}