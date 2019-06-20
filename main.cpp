#include <cstdlib>
#include <ctime>
#include "DogFactory.h"
#include "CatFactory.h"

int main(int argc, char** argv)
{
	// EXAMPLE: we never know in advance what is going to be instantiated, but we also don't care!

	AnimalFactory* dogFactory = new DogFactory();
	AnimalFactory* catFactory = new CatFactory();
	AnimalFactory* animalFactory = nullptr;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{		
		std::string name;

		if ((rand() % 50) > 25)
		{
			name = "Dog_";
			animalFactory = dogFactory;
		}
		else
		{
			name = "Cat_";
			animalFactory = catFactory;
		}

		name += i + 48;
		animalFactory->IntroduceNewAnimal(name);
	}
	
	delete dogFactory;
	delete catFactory;

	return 0;
}