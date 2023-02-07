#include "../includes/sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: format must be : ./sed [file] [s1] [s2]" << std::endl;
        return(0);
    }
    Sed newFile;
    newFile.sedReplace(av[1], av[2], av[3]);
    return(0);
}