#ifndef PHONE_BOOK
# define PHONE_BOOK

#include "../includes/contact.class.hpp"

class Phone_Book
{

	public :

		Phone_Book();
		~Phone_Book();
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