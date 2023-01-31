#include "../includes/PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|     WELCOME ON PHONEBOOK      |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|ADD    ➜       Adding Contacts |" << std::endl;
    std::cout << "|SEARCH ➜       Search Contact  |" << std::endl;
    std::cout << "|EXIT   ➜       Quit program    |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
	phoneBook.menu();
	return (0);
}