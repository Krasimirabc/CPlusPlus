// AnimalDogCat.cpp : Defines the entry point for the console application.
//
//#include"stdafx.h"
#include <iostream>
using namespace std;

class Animal {
public:
	
	void getFamily() {cout << "We are lions." << endl;}
	virtual void getClass() { cout << "I'm an animal" << endl; }
	void getName() { cout << "I'm Spred" << endl; }
};

class Dog : public Animal {
public:
	
	void getClass() { cout << "I'm a Dog" << endl; }
	void getName() { cout << " Rober " << endl; }
};

class GermanShepard : public Dog {
public:
	void getClass() { cout << "I'm a German Shepard" << endl; }
	void getDerived() { cout << "I'm an Animal and Dog" << endl; }
};

class Cat : public Animal {
public:
	void getName() { cout << "I'm Tom" << endl; }
};

void whatClassAreYou(Animal *animal) {
	animal->getClass();
}
void whatIsMyName(Dog *dog) {
	dog->getName();
}

int main()
{
	Animal *animal = new Animal;
	Dog *dog = new Dog;
	Cat *cat = new Cat;

	animal->getClass();
	dog->getClass();
	dog->getName();
	cat->getName();
	animal -> getName();
	

	whatClassAreYou(animal);
	whatClassAreYou(dog);
	whatClassAreYou(cat);
	whatIsMyName(dog);

	Dog spot;
	GermanShepard max;
	
	Animal* ptrDog = &spot;
	Animal* ptrGermanShepard = &max;
	
	ptrDog -> getFamily();
	ptrDog->getClass();

	ptrGermanShepard->getFamily();
	ptrGermanShepard->getClass();


	system("PAUSE");
    return 0;
}

