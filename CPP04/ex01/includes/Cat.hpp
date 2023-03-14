#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <cmath>
#include <string>

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        //constructors and destructors
        Cat();
        Cat(const Cat& other);
        ~Cat();
        Brain *getbrain() const;
        void makeSound() const;
        //overloads
        Cat& operator=(const Cat& rhs);
};

std::ostream &operator<<(std::ostream &out, Cat const &elem);

#endif