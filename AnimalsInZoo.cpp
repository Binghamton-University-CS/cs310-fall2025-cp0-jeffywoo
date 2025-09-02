#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"



AnimalsInZoo::AnimalsInZoo(Animal animalToAdd) {
	numAnimals = 1;
	animal = animalToAdd;
	
}

AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
	
}

void AnimalsInZoo::display() {
	std::cout<< "number of animals: " << numAnimals<<std::endl;
	if (numAnimals == 1) {
		animal.display();
	}
}

	
