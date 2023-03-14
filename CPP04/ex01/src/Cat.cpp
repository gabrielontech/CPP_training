#include "../includes/Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain)
{
    std::cout << "Default constructor of Cat called" << std::endl;
    return ;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Destructor of Cat called" << std::endl;
    return ;
}

Cat:: Cat( const Cat &copy ) : Animal(copy._type)
{
    std::cout << "Constructor by copy called" << std::endl;
    *this = copy;
}

Cat & Cat::operator=( Cat const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;
    this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

Brain *Cat::getbrain(void ) const 
{
    return (_brain);
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