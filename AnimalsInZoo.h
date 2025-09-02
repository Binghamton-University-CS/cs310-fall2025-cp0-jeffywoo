#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
	private:
		int numAnimals;
		Animal animal;
	public: 
	AnimalsInZoo(Animal animal);
	void display();
	AnimalsInZoo();	

};
