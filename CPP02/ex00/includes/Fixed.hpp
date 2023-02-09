#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
    private:
        int _value;
        const int _bits = 8;
    public:
        //constructors and destructors
        Fixed();
        int     getRawBits( void )const;
        void    setRawBits( int const raw );
        Fixed(const Fixed& other);
        ~Fixed();
        //overloads
        Fixed& operator=(const Fixed& rhs);
};

#endif