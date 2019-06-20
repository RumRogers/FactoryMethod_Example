#pragma once
#include "AnimalFactory.h"

class CatFactory : public AnimalFactory // CONCRETE CREATOR 2
{
public:
	virtual Animal* createAnimal(const std::string& name);
};