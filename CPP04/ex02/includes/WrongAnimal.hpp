#ifndef WRONG_Animal_HPP
# define WRONG_Animal_HPP
#include <iostream>
#include <cmath>
#include <string>

class WrongAnimal
{

    protected:
        std::string _type;
        WrongAnimal(std::string type);
    public:
        //constructors and destructors
        WrongAnimal();
        std::string getType() const;
        WrongAnimal(const WrongAnimal& other);
        void makeSound() const;
        ~WrongAnimal();
        //overloads
        WrongAnimal& operator=(const WrongAnimal& rhs);
};

std::ostream &operator<<(std::ostream &out, WrongAnimal const &elem);

#endif