#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(): WrongAAnimal("WrongCat")
{
    std::cout << "Default constructor of WrongCat called" << std::endl;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor of WrongCat called" << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAAnimal(cpy._type){

	std::cout << "WrongCat copy constructor called" << std::endl;
	return;
}

WrongCat & WrongCat::operator=( WrongCat const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;
   _type = src._type + "_copy";;
   return *this;
}

void    WrongCat::makeSound( void )const
{
    std::cout << "Miaou Miaou" << std::endl;
}

std::ostream &operator<<(std::ostream &out, WrongCat const &elem)
{
    out << " Type : " << elem.getType() << std::endl;
    return (out);
}