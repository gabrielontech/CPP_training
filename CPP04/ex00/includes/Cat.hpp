#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include <cmath>
#include <string>


class Cat : public Animal
{
    public:
        //constructors and destructors
        Cat();
        Cat(const Cat& other);
        std::string getType();
        ~Cat();
        //overloads
        Cat& operator=(const Cat& rhs);
};

std::ostream &operator<<(std::ostream &out, Cat const &elem);
#endif