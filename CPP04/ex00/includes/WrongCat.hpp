#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
#include "WrongAAnimal.hpp"
#include <iostream>
#include <cmath>
#include <string>

class WrongCat : public WrongAAnimal
{
    public:
        //constructors and destructors
        WrongCat();
        WrongCat(const WrongCat& other);
        ~WrongCat();
        void makeSound() const;
        //overloads
        WrongCat& operator=(const WrongCat& rhs);
};

std::ostream &operator<<(std::ostream &out, WrongCat const &elem);

#endif