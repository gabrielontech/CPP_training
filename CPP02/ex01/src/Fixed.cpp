#include "../includes/Fixed.hpp"

//constructors and destructors
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( float const floating )
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(floating * (1 << this->_bits));
}


Fixed::Fixed( int const integer )
{
    std::cout << "Float constructor called" << std::endl;
    this->_value  = integer << this->_bits;;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

int Fixed::getRawBits(void)const 
{
    std::cout << "getRawbits member function called" << std::endl;
    return (this->_value);
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(this->_value) / static_cast<float>(1 << this->_bits));
}

int Fixed::toInt( void ) const
{
    return (this->_value >> this->_bits);
}

void Fixed::setRawBits(int const raw)
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

std::ostream& operator<<( std::ostream &nstream, Fixed const &src )
{
    //std::cout << "Shift operator called" << std::endl;
    nstream << src.toFloat();
    return (nstream);
}