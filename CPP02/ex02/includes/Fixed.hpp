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
        int min(int a, int b);
        float min(const float a, const float b);
        int max(int a, int b);
        float max(const float a, const float b);
        ~Fixed();
        //overloads
        Fixed& operator=(const Fixed& rhs);
        Fixed operator+(const Fixed& rhs);
        Fixed operator-(const Fixed& rhs);
        Fixed operator*(const Fixed& rhs);
        Fixed operator/(const Fixed& rhs);
        // Comparaison
        bool operator>(const Fixed& rhs);
        bool operator<(const Fixed& rhs);
        bool operator>=(const Fixed& rhs);
        bool operator<=(const Fixed& rhs);
        bool operator==(const Fixed& rhs);
        bool operator!=(const Fixed& rhs);
        // increment and decrement
        Fixed& operator++( void );
        Fixed& operator--( void );
        Fixed operator++(int);
        Fixed operator--(int);
};

std::ostream& operator<<( std::ostream &fd, Fixed const &src);

#endif