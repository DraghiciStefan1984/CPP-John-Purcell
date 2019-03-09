#pragma once

class Cat
{
public:
	Cat();
	~Cat();

	void Speak();
	void MakeHappy();
	void MakeSad();

private:
	bool happy;
};