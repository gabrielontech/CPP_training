#ifndef  BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <cmath>
#include <string>

class Bureaucrat
{
    protected:
        const std::string _name;
        unsigned short int grade;
    public:
        //constructors and destructors
        Bureaucrat();
        Bureaucrat(std::string type);
        Bureaucrat(const Bureaucrat& other);
        virtual ~Bureaucrat();
        //overloads
        Bureaucrat& operator=(const Bureaucrat& rhs);
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &elem);

#endif