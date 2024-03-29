#include "../includes/Dog.hpp"

Dog::Dog(): AAnimal("Dog"), _brain(new Brain)
{
    std::cout << "Default constructor of Dog called" << std::endl;
    return ;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Destructor of Dog called" << std::endl;
    return ;
}

Dog:: Dog( const Dog &copy ): AAnimal(copy._type)
{
    std::cout << "Constructor of Dog by copy called" << std::endl;
}

void    Dog::makeSound( void )const
{
    std::cout << "Grrrrr wouf" << std::endl;
}

Dog & Dog::operator=( Dog const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;
    this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Dog const &elem)
{
    out << " Type : " << elem.getType() << std::endl;
    return (out);
}