#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

//-----------------------------
// Main fourni par le sujet 
//-----------------------------

int main()
{
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound! 
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return 0; 
}



// int main(){

// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* r = new Cat();
// 	const WrongAnimal* i = new WrongCat();
	
// 	std::cout << std::endl << std::endl;
	
// 	std::cout << meta->getType() << " " << std::endl;
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << r->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
	
// 	std::cout << std::endl << std::endl;
	
// 	meta->makeSound();
// 	j->makeSound();
// 	r->makeSound();
// 	i->makeSound();
	
// 	std::cout << std::endl << std::endl;
	
// 	delete meta;
// 	delete j;
// 	delete r;
// 	delete i;
	
// 	return (0);
// }