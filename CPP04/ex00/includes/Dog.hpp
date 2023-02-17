#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include <iostream>
#include <cmath>
#include <string>


class Dog : public Animal
{
    public:
        //constructors and destructors
        Dog();
        Dog(const Dog& other);
        ~Dog();
        std::string getType();
        //overloads
        Dog& operator=(const Dog& rhs);
};

std::ostream &operator<<(std::ostream &out, Dog const &elem);
#endif