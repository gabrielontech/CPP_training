#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public :
        Zombie();
        ~Zombie();
        void set_name(std::string name);
        void announce(void);

    private :
        std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif