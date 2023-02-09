#include "../includes/Fixed.hpp"
#include <iostream>
#include <string>

//constructors and destructors
Fixed::Fixed() : _value(0);
{
    std::cout << "Default constructor of Fixed called." << std::endl;
}
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::getRawBits(void) const 
{
    std::cout << "getRawbits member function called" << std::endl;
    return (this->_value);
}

Fixed::setRawBits(int const raw)
{
    std::cout << "setRawbits member function called" << std::endl;
    this->_value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor of Fixed called." << std::endl;
}
//overloads
Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}