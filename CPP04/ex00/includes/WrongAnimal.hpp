#ifndef WRONG_AAnimal_HPP
# define WRONG_AAnimal_HPP
#include <iostream>
#include <cmath>
#include <string>

class WrongAAnimal
{

    protected:
        std::string _type;
        WrongAAnimal(std::string type);
    public:
        //constructors and destructors
        WrongAAnimal();
        std::string getType() const;
        WrongAAnimal(const WrongAAnimal& other);
        void makeSound() const;
        ~WrongAAnimal();
        //overloads
        WrongAAnimal& operator=(const WrongAAnimal& rhs);
};

std::ostream &operator<<(std::ostream &out, WrongAAnimal const &elem);

#endif