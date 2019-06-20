#include "AnimalFactory.h"
#include "Animal.h"

void AnimalFactory::IntroduceNewAnimal(const std::string& name)
{
	Animal* a = createAnimal(name);
	a->greet();

	delete a;
}
