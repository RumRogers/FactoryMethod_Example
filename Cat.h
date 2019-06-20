#pragma once
#include "Animal.h"

class Cat :	public Animal // CONCRETE PRODUCT 2
{
public:
	Cat(const std::string& name) : Animal(name) {}
protected:
	virtual void makeNoise();
};

