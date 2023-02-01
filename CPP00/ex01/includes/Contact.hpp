#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <iomanip>

#define SUCCESS 0
#define ERROR -1

class Contact
{
	public:
		Contact();
		~Contact();
		void set_lastname(std::string str);
		void set_dark_secret(std::string str);
		void set_name(std::string str);
		void set_nickname(std::string str);
		void set_phone_nb(std::string str);
		void set_id(int id);
		std::string get_lastname(void);
		std::string get_name(void);
		std::string get_nickname(void);
		int get_id(void);

	private :
		std::string _last_name;
		std::string _name;
		std::string _nick_name;
		std::string _dark_secret;
		std::string _phone_nb;
		int _id;
};

#endif