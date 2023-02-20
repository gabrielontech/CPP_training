#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Default constructor of AAnimal called" << std::endl;
    return ;
}

AAnimal::AAnimal(std::string type)
{
    _type = type;
    std::cout << "Default constructor of AAnimal called" << std::endl;
    return ;
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor of AAnimal called" << std::endl;
    return ;
}

AAnimal:: AAnimal( const AAnimal &copy )
{
    std::cout << "Constructor by copy called" << std::endl;
    *this = copy;
}

std::string AAnimal::getType() const
{
    return (_type);
}

void    AAnimal::makeSound( void )const
{
    std::cout << "**Silence**" << std::endl;
}

AAnimal & AAnimal::operator=( AAnimal const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;
   _type = src._type + "_copy";;
   return *this;
}

std::ostream &operator<<(std::ostream &out, AAnimal const &elem)
{
    out << " Type : " << elem.getType() << std::endl;
    return (out);
}