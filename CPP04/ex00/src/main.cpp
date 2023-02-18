#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

//-----------------------------
// Main fourni par le sujet 
//-----------------------------

// int main()
// {
//     const Animal* meta = new Animal(); 
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl; 
//     std::cout << i->getType() << " " << std::endl; 
//     i->makeSound(); //will output the cat sound! 
//     j->makeSound();
//     meta->makeSound();
//     return 0; 
// }

int main()
{
    //-------- Tests with Animal ---------------
    std::cout <<  "-------- ANIMAL OBJECT TESTS -----------"  << std::endl;
    std::cout <<  "        Objects creation              "  << std::endl;
    const Animal* animal = new Animal();
    const Animal* koala = new Animal("Koala"); 
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout <<  "----------- types  --------------"  << std::endl;
    std::cout << "Constructor Animal by default: " << animal->getType() << " " << std::endl;
    std::cout << "Constructor Animal + string: " << koala->getType() << " " << std::endl;
    std::cout << "Constructor Dog: "  << dog->getType() << " " << std::endl; 
    std::cout << "Constructor Cat: " << cat->getType() << " " << std::endl; 

    std::cout <<  "----------- Sounds --------------"  << std::endl;
    std::cout << "Cat sound : " ; cat->makeSound(); // should  output the cat sound! 
    std::cout << "Dog sound : " ; dog->makeSound(); // should  output the dog sound! 
    std::cout << "Animal default sound : " ; animal->makeSound(); // should output no sound! 

    std::cout <<  "-----------------------------------------"  << std::endl;
    delete animal;
    delete koala;
    delete cat;
    delete dog;

    //-------- Tests with Wrong Animal --------------
    std::cout <<  "------- WRONG_ANIMAL OBJECT TESTS ----------"  << std::endl;
    const WrongAnimal* wronganimal = new WrongAnimal(); 
    const WrongAnimal* wrongcat = new WrongCat();
    const WrongCat* realCat = new WrongCat();

    realCat->makeSound(); //should output Cat sound! 
    wronganimal->makeSound(); //should output no sound! 
    wrongcat->makeSound(); // should output no sound! 
    std::cout <<  "-----------------------------------------"  << std::endl;

    delete wronganimal;
    delete realCat;
    delete wrongcat;

    return (0); 
}