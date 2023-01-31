#include "../includes/Contact.hpp"

Contact::Contact(){
	return;
}

Contact::~Contact(){
	
	return;
}

int Contact::get_id(void)
{
	return (this->_id);
}

void Contact::set_id(int id)
{
	this->_id = id + 1;
	return;
}

std::string Contact::get_lastname(void)
{
	return (this->_last_name);
}

std::string Contact::get_name(void)
{
	return (this->_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nick_name);
}

void Contact::set_lastname(std::string str)
{
	this->_last_name = str;
	return;
}

void Contact::set_nickname(std::string str)
{
	this->nick_name = str;
	return;
}


void Contact::set_name(std::string str)
{
	this->_name = str;
	return;
}

void Contact::set_phone_nb(std::string str)
{
	this->_phone_nb = str;
	return;
}

void Contact::set_dark_secret(std::string str)
{
	this->_dark_secret = str;
	return;
}
