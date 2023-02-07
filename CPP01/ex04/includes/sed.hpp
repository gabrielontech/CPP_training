#ifndef SED_H
#define SED_H

#include <iostream>
#include <string>
#include <fstream>

class Sed {
    public:
    void    sedReplace( std::string file, std::string str1, std::string str2 );
    Sed( void );
    ~Sed( void );
};

#endif