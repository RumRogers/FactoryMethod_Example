#pragma once
#include <iostream>

class Animal;

class AnimalFactory // CREATOR
{
public:
	void IntroduceNewAnimal(const std::string& name); // OPERATION
	virtual Animal* createAnimal(const std::string& name) = 0; // FACTORY METHOD (could be replaced with a non-abstract default one)
};
