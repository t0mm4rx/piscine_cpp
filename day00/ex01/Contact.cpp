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
