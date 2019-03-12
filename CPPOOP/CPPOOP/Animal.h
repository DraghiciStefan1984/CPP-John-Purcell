#pragma once
#include <string>

class Animal
{
private:
	string name;
public:
	Animal();
	~Animal();
	void Speak();
	void SetName(string name);
	string GetName();
};

