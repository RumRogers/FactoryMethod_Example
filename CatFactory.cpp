#include "CatFactory.h"
#include "Cat.h"

Animal* CatFactory::createAnimal(const std::string& name)
{
	return new Cat(name);
}
