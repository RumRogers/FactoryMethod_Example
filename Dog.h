#pragma once
#include "Animal.h"

class Dog : public Animal // CONCRETE PRODUCT 1
{
public:
	Dog(const std::string& name) : Animal(name) {}
protected:
	virtual void makeNoise();
};