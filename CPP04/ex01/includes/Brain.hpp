#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <cmath>
#include <string>

class Brain
{

    protected:
        std::string _ideas[100];
    public:
        //constructors and destructors
        Brain();
        Brain(std::string type);
        Brain(const Brain& other);
        const std::string &extractIdeas(int index) const;
        ~Brain();
        //overloads
        Brain& operator=(const Brain& rhs);
};

#endif