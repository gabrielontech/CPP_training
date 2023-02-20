#ifndef DOG_HPP
# define DOG_HPP
#include "AAnimal.hpp"
#include <iostream>
#include <cmath>
#include <string>


class Dog : public AAnimal
{
    public:
        //constructors and destructors
        Dog();
        Dog(const Dog& other);
        ~Dog();
        void makeSound() const;
        //overloads
        Dog& operator=(const Dog& rhs);
};

std::ostream &operator<<(std::ostream &out, Dog const &elem);

#endif