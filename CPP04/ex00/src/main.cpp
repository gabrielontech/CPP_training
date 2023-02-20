#include "../includes/AAnimal.hpp"
#include "../includes/WrongAAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

//-----------------------------
// Main fourni par le sujet 
//-----------------------------

// int main()
// {
//     const AAnimal* meta = new AAnimal(); 
//     const AAnimal* j = new Dog();
//     const AAnimal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl; 
//     std::cout << i->getType() << " " << std::endl; 
//     i->makeSound(); //will output the cat sound! 
//     j->makeSound();
//     meta->makeSound();
//     return 0; 
// }

int main()
{
    //-------- Tests with AAnimal ---------------
    std::cout <<  "-------- AAnimal OBJECT TESTS -----------"  << std::endl;
    std::cout <<  "        Objects creation              "  << std::endl;
    const AAnimal* AAnimal = new AAnimal();
    const AAnimal* koala = new AAnimal("Koala"); 
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout <<  "----------- types  --------------"  << std::endl;
    std::cout << "Constructor AAnimal by default: " << AAnimal->getType() << " " << std::endl;
    std::cout << "Constructor AAnimal + string: " << koala->getType() << " " << std::endl;
    std::cout << "Constructor Dog: "  << dog->getType() << " " << std::endl; 
    std::cout << "Constructor Cat: " << cat->getType() << " " << std::endl; 

    std::cout <<  "----------- Sounds --------------"  << std::endl;
    std::cout << "Cat sound : " ; cat->makeSound(); // should  output the cat sound! 
    std::cout << "Dog sound : " ; dog->makeSound(); // should  output the dog sound! 
    std::cout << "AAnimal default sound : " ; AAnimal->makeSound(); // should output no sound! 

    std::cout <<  "-----------------------------------------"  << std::endl;
    delete AAnimal;
    delete koala;
    delete cat;
    delete dog;

    //-------- Tests with Wrong AAnimal --------------
    std::cout <<  "------- WRONG_AAnimal OBJECT TESTS ----------"  << std::endl;
    const WrongAAnimal* wrongAAnimal = new WrongAAnimal(); 
    const WrongAAnimal* wrongcat = new WrongCat();
    const WrongCat* realCat = new WrongCat();

    realCat->makeSound(); //should output Cat sound! 
    wrongAAnimal->makeSound(); //should output no sound! 
    wrongcat->makeSound(); // should output no sound! 
    std::cout <<  "-----------------------------------------"  << std::endl;

    delete wrongAAnimal;
    delete realCat;
    delete wrongcat;

    return (0); 
}