#include "../includes/WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal()
{
    std::cout << "Default constructor of WrongAAnimal called" << std::endl;
    return ;
}

WrongAAnimal::WrongAAnimal(std::string type)
{
    _type = type;
    std::cout << "Default constructor of WrongAAnimal called" << std::endl;
    return ;
}


WrongAAnimal::~WrongAAnimal()
{
    std::cout << "Destructor of WrongAAnimal called" << std::endl;
    return ;
}

WrongAAnimal:: WrongAAnimal( const WrongAAnimal &copy )
{
    std::cout << "Constructor by copy called" << std::endl;
    *this = copy;
}

std::string WrongAAnimal::getType() const
{
    return (_type);
}

WrongAAnimal & WrongAAnimal::operator=( WrongAAnimal const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;
   _type = src._type + "_copy";;
   return *this;
}

void    WrongAAnimal::makeSound( void )const
{
    std::cout << "Wrong AAnimal" << std::endl;
}


std::ostream &operator<<(std::ostream &out, WrongAAnimal const &elem)
{
    out << " Type : " << elem.getType() << std::endl;
    return (out);
}