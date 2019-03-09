#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name;

public:
	Person();
	~Person();
	void SetName(string name);
	string GetName();
	string ToString();
};

