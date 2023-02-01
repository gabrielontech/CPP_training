#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "../includes/Contact.hpp"

class PhoneBook
{
	public :

		PhoneBook();
		~PhoneBook();
		int add_contact(void);
		int search_contact();
		void menu();
		void printRepertoire(std::string str);
		int fillContact(std::string last_name, std::string name, std::string number, std::string nick_name, std::string dark_secret);
		void exit_things(void);
	private :
		Contact _tab_contacts[8];
		int _index;
};

#endif