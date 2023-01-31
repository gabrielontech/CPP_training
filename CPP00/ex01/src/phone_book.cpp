#include "../includes/phoneBook_class.hpp"

Phone_Book::Phone_Book(void)
{
	this->_index = -1;
	return;
}

Phone_Book::~Phone_Book(void)
{
	return;
}

void Phone_Book::exit_things(void)
{
	exit(ERROR);
}

void    Phone_Book::printRepertoire(std::string str)
{
	std::cout <<  "|";
	if (str.length() <= 10)
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	return;
}


int Phone_Book::replace_older_contact(std::string last_name, std::string name, std::string number, std::string nick_name, std::string dark_secret)
{
	this->_index--;
	if (nick_name.empty() || last_name.empty() || name.empty() || number.empty() || dark_secret.empty())
		return (ERROR);
	this->_tab_contacts[0].Contact::set_id(this->_index);
	this->_tab_contacts[0].Contact::set_name(name);
	this->_tab_contacts[0].Contact::set_lastname(last_name);
	this->_tab_contacts[0].Contact::set_phone_nb(number);
	this->_tab_contacts[0].Contact::set_nickname(nick_name);
	this->_tab_contacts[0].Contact::set_dark_secret(dark_secret);
	return (SUCCESS);
}


int Phone_Book::fillContact(std::string last_name, std::string name, std::string number, std::string nick_name, std::string dark_secret)
{
	if (nick_name.empty() || last_name.empty() || name.empty() || number.empty() || dark_secret.empty())
		return (ERROR);
	this->_tab_contacts[this->_index].Contact::set_id(this->_index);
	this->_tab_contacts[this->_index].Contact::set_name(name);
	this->_tab_contacts[this->_index].Contact::set_lastname(last_name);
	this->_tab_contacts[this->_index].Contact::set_phone_nb(number);
	this->_tab_contacts[this->_index].Contact::set_nickname(nick_name);
	this->_tab_contacts[this->_index].Contact::set_dark_secret(dark_secret);
	return (SUCCESS);
}

int Phone_Book::add_contact(void)
{
	std::string last_name;
	std::string name;
	std::string nick_name;
	std::string dark_secret;
	std::string number;

	if (this->_index < 0)
		this->_index = 0;
	std::cout << "Add your name: " << std::endl;
	getline(std::cin, name);
	if (std::cin.eof())
		Phone_Book::exit_things();
	std::cout << "Add your last_name: " << std::endl;
	getline(std::cin, last_name);
	if (std::cin.eof())
		Phone_Book::exit_things();
	std::cout << "Add your nick_name: " << std::endl;
	getline(std::cin, nick_name);
	if (std::cin.eof())
		Phone_Book::exit_things();
	std::cout << "Add your number: " << std::endl;
	getline(std::cin, number);
	if (std::cin.eof())
		Phone_Book::exit_things();
	std::cout << "Add your darkest secret (Your information will stay protected) : " << std::endl;
	getline(std::cin, dark_secret);
	if (std::cin.eof())
		Phone_Book::exit_things();
	if (this->_index == 8)
	{
		if((Phone_Book::replace_older_contact(last_name, name, number, nick_name, dark_secret)) == ERROR)
			return (ERROR);
	}
	else if ((Phone_Book::fillContact(last_name, name, number, nick_name, dark_secret)) == ERROR)
		return (ERROR);
	this->_index++;
	std::cout << "Contact added" << std::endl;
	return (SUCCESS);
}

int Phone_Book::search_contact()
{
	if (this->_index < 0)
    {	
		std::cout <<  "it's empty on here, you should add some contacts " << std::endl;	
		return (ERROR);
	}
	std::cout << std::endl;
    std::cout <<  " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < this->_index; i++)
	{
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->_tab_contacts[i].Contact::get_id();
		Phone_Book::printRepertoire(this->_tab_contacts[i].Contact::get_name());
		Phone_Book::printRepertoire(this->_tab_contacts[i].Contact::get_lastname());
		Phone_Book::printRepertoire(this->_tab_contacts[i].Contact::get_nickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter the index of the contact you want to see: " << std::endl;
	std::string index;
	getline(std::cin, index);
	if (std::cin.eof())
		Phone_Book::exit_things();
	if (index.length() > 1 || !isdigit(index[0]))
	{
		std::cout << "Wrong index" << std::endl;
		return (ERROR);
	}
	if (index[0] == '0')
	{
		std::cout << "Wrong index" << std::endl;
		return (ERROR);
	}
	if (atoi(index.c_str()) > this->_index)
	{
		std::cout << "Wrong index" << std::endl;
		return (ERROR);
	}
	int index_int = atoi(index.c_str());
	std::cout << "id : " << this->_tab_contacts[index_int - 1].Contact::get_id() << std::endl;
	std::cout << "Name: " << this->_tab_contacts[index_int - 1].Contact::get_name() << std::endl;
	std::cout << "Last name: " << this->_tab_contacts[index_int - 1].Contact::get_lastname() << std::endl;
	std::cout << "Nickname: " << this->_tab_contacts[index_int - 1].Contact::get_nickname() << std::endl;
	return (SUCCESS);
}

void Phone_Book::menu(void)
{
	std::string command;
	while (1)
	{
		std::cout << std::endl;
		if (this->_index > 0)
		{
    		std::cout << "|-------------------------------|" << std::endl;
    		std::cout << "|ADD    ➜       Adding Contacts |" << std::endl;
    		std::cout << "|SEARCH ➜       Search Contact  |" << std::endl;
    		std::cout << "|EXIT   ➜       Quit program    |" << std::endl;
    		std::cout << "|-------------------------------|" << std::endl;
		}
			std::cout << "YOUR CHOICE (Make sure to choose an option written on the top): " << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof()) // tricky condition because when you ctrl+D the getline lose control haha, i've done it each time I use get_line.
			return;
		if (command == "ADD")
		{
			if (Phone_Book::add_contact() == ERROR)
				std::cout << "You haven't fill in the informations, try again." << std::endl;
		}
		else if (command == "SEARCH")
		{
			if (Phone_Book::search_contact() == ERROR)
				std::cout << std::endl;
		}
		else if (command == "EXIT")
			return;
		else
			std::cout << "What you have written it's apparently none of the option, try again." << std::endl;
	}
}
