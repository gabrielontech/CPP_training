#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <cmath>
#include <string>

class Animal
{

    private:
        std::string _type;
    public:
        //constructors and destructors
        Animal();
        Animal(const Animal& other);
        ~Animal();
        //overloads
        Animal& operator=(const Animal& rhs);
};

std::ostream &operator<<(std::ostream &out, Animal const &elem);
#endif