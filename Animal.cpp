#include "Animal.h"

void Animal::greet()
{
	sayName();
	makeNoise();
}

void Animal::sayName()
{
	std::cout << "Hi, my name's " << mName << "!" << std::endl;
}
