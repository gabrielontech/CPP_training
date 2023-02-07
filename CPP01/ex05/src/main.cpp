#include <iostream>
#include <cstring>
#include <cctype>
#include "../includes/Harl.hpp"

int main(void)
{
    Harl harlito;

    harlito.complain("DEBUG");
    harlito.complain("ERROR");
    harlito.complain("INFO");
    harlito.complain("WARNING");
    harlito.complain("");
    harlito.complain("vkfdbkf");
    return (0);
}