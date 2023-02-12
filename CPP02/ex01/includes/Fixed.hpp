#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
    private:
        int _value;
        static const int _bits = 8;
    public:
        //constructors and destructors
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        float toFloat( void ) const;
        int toInt( void ) const;
        int     getRawBits( void )const;
        void    setRawBits( int const raw );
        Fixed(const Fixed& other);
        ~Fixed();
        //overloads
        Fixed& operator=(const Fixed& rhs);
};

std::ostream& operator<<( std::ostream &fd, Fixed const &src);

#endif