// CopyConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string name;

public:
	Animal() { cout << "Animal created." << endl; }
	~Animal() { cout << "Destructor called" << endl; }
	//our own copy constructor
	Animal(const Animal& otherAnimal) { cout << "Animal created by copying" << endl; }
	void SetName(string name) { this->name = name; }
	string GetName() const { return this->name; }
	void Speak() const { cout << "My name is " << this->name << endl; }
};

//best way to return an object from a function is to use pointer to instantiate the object, 
//instead a of a local temporary variable (Animal animal)
Animal * CreateAnimal()
{
	Animal * pAnimal = new Animal();
	pAnimal->SetName("Bert");
	return pAnimal;
}

int main()
{
	/*
	Animal animal1;
	animal1.SetName("Bobby");
	//we invoke the 'copy constructor' so the constructor is only called the first time, when animal1 is created
	Animal animal2 = animal1;
	animal2.SetName("Jimmy");
	animal1.Speak();
	animal2.Speak();
	*/

	//allocate memory on the heap for an Animal object
	Animal* cat = new Animal();
	cat->SetName("Tomy");
	cat->Speak();
	//always deallocate the memory after the work is done
	//never call delete on a null pointer (cat = nullptr;)
	delete cat;

	Animal * bert = CreateAnimal();
	bert->Speak();
	delete bert;

	Animal * pAnimals = new Animal[10];
	delete pAnimals;

	return 0;
}
