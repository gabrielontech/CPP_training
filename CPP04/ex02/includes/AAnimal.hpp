#ifndef  AAnimal_HPP
# define AAnimal_HPP
#include <iostream>
#include <cmath>
#include <string>

class AAnimal
{

    protected:
        std::string _type;
    public:
        //constructors and destructors
        AAnimal();
        AAnimal(std::string type);
        std::string getType() const;
        virtual void makeSound()const = 0;
        AAnimal(const AAnimal& other);
        virtual ~AAnimal();
        //overloads
        AAnimal& operator=(const AAnimal& rhs);
};
std::ostream &operator<<(std::ostream &out, AAnimal const &elem);

#endif