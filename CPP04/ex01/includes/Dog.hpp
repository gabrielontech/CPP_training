#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <cmath>
#include <string>

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        //constructors and destructors
        Dog();
        Dog(const Dog& other);
        ~Dog();
        Brain *getbrain() const;
        void makeSound() const;
        //overloads
        Dog& operator=(const Dog& rhs);
};

std::ostream &operator<<(std::ostream &out, Dog const &elem);

#endif