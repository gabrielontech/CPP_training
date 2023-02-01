#include <iostream>

int main()
{
    std:: string str("HI THIS IS BRAIN");
    std:: string *stringPTR = &str;
    std:: string &stringREF = str;

    std::cout << "Adress of str in the memory : "  << &str << std::endl;
    std::cout << "Stored adress in stringPTR : "  <<stringPTR << std::endl;
    std::cout << "Stored adress in stringREF : " << &stringREF << std::endl;
    std::cout << "Value of str : " << str << std::endl;
    std::cout << "Value pointed by stringPTR: "  << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
}