#include "../includes/phoneBook_class.hpp"

int main()
{
	Phone_Book phone_book;
	std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|     WELCOME ON PHONEBOOK      |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|ADD    ➜       Adding Contacts |" << std::endl;
    std::cout << "|SEARCH ➜       Search Contact  |" << std::endl;
    std::cout << "|EXIT   ➜       Quit program    |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
	phone_book.menu();
	return (0);
}