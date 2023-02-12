#include "../includes/Fixed.hpp"

//constructors and destructors
Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed( float const floating )
{
    this->_value = roundf(floating * (1 << this->_bits));
}

Fixed::Fixed( int const integer )
{
    this->_value  = integer << this->_bits;;
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

int Fixed::getRawBits(void)const 
{
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
    this->_value = raw;
}

Fixed::~Fixed()
{
}
//overloads
Fixed& Fixed::operator=(const Fixed& rhs)
{
    this->_value = rhs.getRawBits();
    return (*this);
}

Fixed   Fixed::operator+(Fixed const &first)
{
    return (Fixed(this->toFloat() + first.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &first)
{
    return (Fixed(this->toFloat() - first.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &first)
{
    return (Fixed(this->toFloat() * first.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &first)
{
    return (Fixed(this->toFloat() / first.toFloat()));
}

bool Fixed::operator>(const Fixed& rhs)
{
    return (this->_value > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed& rhs)
{
    return (this->_value < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed& rhs)
{
    return (this->_value >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed& rhs)
{
    return (this->_value <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed& rhs)
{
    return (this->_value == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs)
{
    return (this->_value != rhs.getRawBits());
}
 
std::ostream& operator<<( std::ostream &nstream, Fixed const &src )
{
    //std::cout << "Shift operator called" << std::endl;
    nstream << src.toFloat();
    return (nstream);
}