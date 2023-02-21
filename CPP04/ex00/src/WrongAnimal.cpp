#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor of WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
    std::cout << "Default constructor of WrongAnimal called" << std::endl;
    return ;
}


WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal:: WrongAnimal( const WrongAnimal &copy )
{
    std::cout << "Constructor by copy called" << std::endl;
    *this = copy;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;
   _type = src._type + "_copy";;
   return *this;
}

void    WrongAnimal::makeSound( void )const
{
    std::cout << "Wrong AAnimal" << std::endl;
}


std::ostream &operator<<(std::ostream &out, WrongAnimal const &elem)
{
    out << " Type : " << elem.getType() << std::endl;
    return (out);
}