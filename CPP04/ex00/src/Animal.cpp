#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor of Animal called" << std::endl;
    return ;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Default constructor of Animal called" << std::endl;
    return ;
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal called" << std::endl;
    return ;
}

Animal::Animal( const Animal &copy )
{
    std::cout << "Constructor by copy called" << std::endl;
    *this = copy;
}

std::string Animal::getType() const
{
    return (_type);
}

void    Animal::makeSound( void )const
{
    std::cout << "**Silence**" << std::endl;
}

Animal & Animal::operator=( Animal const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;
   _type = src._type + "_copy";;
   return *this;
}

std::ostream &operator<<(std::ostream &out, Animal const &elem)
{
    out << " Type : " << elem.getType() << std::endl;
    return (out);
}