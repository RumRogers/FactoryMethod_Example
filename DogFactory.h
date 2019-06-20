#pragma once
#include "AnimalFactory.h"

class DogFactory : public AnimalFactory // CONCRETE CREATOR 1
{
public:
	virtual Animal* createAnimal(const std::string& name);
};