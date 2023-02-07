#include <iostream>
#include <cstring>
#include <cctype>
#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    
    Harl harlito;

    std::string arg = argv[1];
    harlito.complain(arg);

    return (0);
}