// Maps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person() {};
	Person(string name, int age) : name(name), age(age){}
	void print() const
	{
		cout << name << ", " << age << endl;
	}
};

int main()
{
	map<string, int> ages;
	ages["Stef"] = 30;
	ages["Mike"] = 40;
	ages["Carl"] = 50;

	for (map<string, int>::iterator iter = ages.begin(); iter != ages.end(); iter++)
	{
		cout << iter->first << ":" << iter->second << endl;
	}

	map<int, Person> people;
	people[0] = Person("John", 30);
	people[1] = Person("Pink", 25);
	people[2] = Person("Ted", 44);

	for (map<int, Person>::iterator iterat = people.begin(); iterat != people.end(); iterat++)
	{
		cout << iterat->first << ":" << flush;
		iterat->second.print();
	}
	return 0;
}