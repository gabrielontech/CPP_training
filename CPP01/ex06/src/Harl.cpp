#include "../includes/Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{

}

void Harl::_debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return ;
}

void Harl::_info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    return ;
}

void Harl::_warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::_error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain(std::string level)
{
    functionsPointer ptr[4] = {&Harl::_debug, &Harl::_info,  &Harl::_warning, &Harl::_error};
    std::string complaining[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int level_int = (level == "DEBUG") ? 0 
                        : (level == "INFO") ? 1 
                        : (level == "WARNING") ? 2 
                        : (level == "ERROR") ? 3
                        : -1;
    if (level_int == -1)
    {
        std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
    switch (level_int)
    {
        case 0:
            for (int i = 0; i < 4; i++)
            {
                std::cout << "[ " << complaining[i] << " ]" << std::endl;
                (this->*ptr[i])();
                std::cout << std::endl;
            }
        break;
        case 1:
            for (int i = 1; i < 4; i++)
            {
                std::cout << "[ " << complaining[i] << " ]" << std::endl;
                (this->*ptr[i])();
                std::cout << std::endl;
            }
        break;
        case 2:
            for (int i = 2; i < 4; i++)
            {
                std::cout << "[ " << complaining[i] << " ]" << std::endl;
                (this->*ptr[i])();
                std::cout << std::endl;
            }
        break;
        case 3:
            for (int i = 3; i < 4; i++)
            {
                std::cout << "[ " << complaining[i] << " ]" << std::endl;
                (this->*ptr[i])();
                std::cout << std::endl;
            }
        break;
    }
}