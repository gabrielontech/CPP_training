#ifndef Animal_HPP
# define Animal_HPP
#include <iostream>
#include <cmath>
#include <string>

class Animal
{

    protected:
        std::string _type;
    public:
        //constructors and destructors
        Animal();
        Animal(std::string type);
        std::string getType() const;
        virtual void makeSound() const;
        Animal(const Animal& other);
        virtual ~Animal();
        //overloads
        Animal& operator=(const Animal& rhs);
};
std::ostream &operator<<(std::ostream &out, Animal const &elem);

#endif