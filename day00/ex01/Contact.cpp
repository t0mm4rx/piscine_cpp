#include "Contact.hpp"


Contact::Contact(void)
{}

Contact::~Contact(void)
{}

void Contact::print(void)
{
	std::cout << std::setw(20) << std::left << "First name" << this->first_name << std::endl;
	std::cout << std::setw(20) << std::left << "Last name" << this->last_name << std::endl;
	std::cout << std::setw(20) << std::left << "Nickname" << this->nick_name << std::endl;
	std::cout << std::setw(20) << std::left << "Login" << this->login << std::endl;
	std::cout << std::setw(20) << std::left << "Postal address" << this->postal_address << std::endl;
	std::cout << std::setw(20) << std::left << "Mail" << this->mail << std::endl;
	std::cout << std::setw(20) << std::left << "Phone" << this->phone << std::endl;
	std::cout << std::setw(20) << std::left << "Birthday" << this->birthday << std::endl;
	std::cout << std::setw(20) << std::left << "Favorite meal" << this->favorite_meal << std::endl;
	std::cout << std::setw(20) << std::left << "Underwear color" << this->underwear_color << std::endl;
	std::cout << std::setw(20) << std::left << "Darkest secret" << this->darkest_secret << std::endl;
}

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nick_name(std::string nick_name)
{
	this->nick_name = nick_name;
}

void Contact::set_login(std::string login)
{
	this->login = login;
}

void Contact::set_postal_address(std::string postal_address)
{
	this->postal_address = postal_address;
}

void Contact::set_mail(std::string mail)
{
	this->mail = mail;
}

void Contact::set_phone(std::string phone)
{
	this->phone = phone;
}

void Contact::set_birthday(std::string birthday)
{
	this->birthday = birthday;
}

void Contact::set_favorite_meal(std::string favorite_meal)
{
	this->favorite_meal = favorite_meal;
}

void Contact::set_underwear_color(std::string underwear_color)
{
	this->underwear_color = underwear_color;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name(void)
{
	return this->first_name;
}

std::string Contact::get_last_name(void)
{
	return this->last_name;
}

std::string Contact::get_login(void)
{
	return this->login;
}
