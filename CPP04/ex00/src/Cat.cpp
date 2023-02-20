#include "../includes/Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
    std::cout << "Default constructor of Cat called" << std::endl;
    return ;
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat called" << std::endl;
    return ;
}

Cat:: Cat( const Cat &copy ) : AAnimal(copy._type)
{
    std::cout << "Constructor by copy called" << std::endl;
    *this = copy;
}

Cat & Cat::operator=( Cat const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;
   _type = src._type + "_copy";;
   return *this;
}

void    Cat::makeSound( void )const
{
    std::cout << "Miaou Miaou" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Cat const &elem)
{
    out << " Type : " << elem.getType() << std::endl;
    return (out);
}