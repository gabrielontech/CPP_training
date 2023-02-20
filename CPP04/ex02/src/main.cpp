#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(){

	const AAnimal	*CatsAndDogs[100];
	// AAnimal *animal = new AAnimal();


	for(int i = 0; i < 100; i++){

		if (i % 2){
			
			CatsAndDogs[i] = new Cat();
		}
		else{

			CatsAndDogs[i] = new Dog();			
		}
	}
	for (int j = 0; j < 100; j++){

		CatsAndDogs[j]->makeSound();
		// CatsAndDogs[j]->extractIdeas();
	}
	for (int k = 0; k < 100; k++){

		delete CatsAndDogs[k];
	}

	// const AAnimal	*Aanimal;

	// Aanimal = new AAnimal();
	
	return (0);
}
