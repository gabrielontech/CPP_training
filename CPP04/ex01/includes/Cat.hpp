#ifndef CAT_HPP
# define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <cmath>
#include <string>

class Cat : public AAnimal
{
    private:
        Brain *_brain;
    public:
        //constructors and destructors
        Cat();
        Cat(const Cat& other);
        ~Cat();
        void makeSound() const;
        //overloads
        Cat& operator=(const Cat& rhs);
};

std::ostream &operator<<(std::ostream &out, Cat const &elem);

#endif