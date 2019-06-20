#include "DogFactory.h"
#include "Dog.h"

Animal* DogFactory::createAnimal(const std::string& name)
{
	return new Dog(name);
}
