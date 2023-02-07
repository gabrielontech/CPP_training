#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <cstring>
#include <cctype>

class Harl
{
    private :
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
    public :
        Harl();
        ~Harl();
        void complain(std::string level);
};
typedef    void (Harl::*functionsPointer)(void);

#endif
