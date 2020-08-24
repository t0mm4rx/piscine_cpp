#include "Contact.hpp"

void listen_user(Contact contacts[8], int *index)
{
	std::string cmd;

	while (std::cin >> cmd)
		handle_command(cmd, contacts, index);
}

void handle_command(std::string cmd, Contact contacts[8], int *index)
{
	if (to_upper(cmd) == "EXIT")
		exit(0);
	else if (to_upper(cmd) == "ADD")
		add(contacts, index);
	else if (to_upper(cmd) == "SEARCH")
		search(contacts, index);
	else if (cmd != "")
		std::cout << "Not a valid command!" << std::endl;
}

void search(Contact contacts[8], int *index)
{
	std::string	buffer;
	int					detail;

	print_contacts(contacts, index);
	if (*index == 0)
		return;
	std::cin.ignore();
	std::cout << "Enter the index of the contact: ";
	std::getline(std::cin, buffer);
	try {
		detail = std::stoi(buffer);
		if (detail >= 0 && detail < *index)
		{
			contacts[detail].print();
			std::cout << std::endl;
		}
		else
			std::cout << "No contact with this id!" << std::endl << std::endl;
	}
	catch (std::invalid_argument)
	{
		std::cout << "Invalid index!" << std::endl << std::endl;
	}
}

void add(Contact contacts[8], int *index)
{
	Contact			c;
	std::string	buffer;

	if (*index >= 8)
	{
		std::cout << "All 8 contacts already registed!" << std::endl << std::endl;
		return ;
	}
	std::cin.ignore();
	std::cout << std::setw(20) << "First name: ";
	std::getline(std::cin, buffer);
	c.set_first_name(buffer);
	std::cout << std::setw(20) << "Last name: ";
	std::getline(std::cin, buffer);
	c.set_last_name(buffer);
	std::cout << std::setw(20) << "Nickname: ";
	std::getline(std::cin, buffer);
	c.set_nick_name(buffer);
	std::cout << std::setw(20) << "Login: ";
	std::getline(std::cin, buffer);
	c.set_login(buffer);
	std::cout << std::setw(20) << "Postal address: ";
	std::getline(std::cin, buffer);
	c.set_postal_address(buffer);
	std::cout << std::setw(20) << "Mail: ";
	std::getline(std::cin, buffer);
	c.set_mail(buffer);
	std::cout << std::setw(20) << "Phone: ";
	std::getline(std::cin, buffer);
	c.set_phone(buffer);
	std::cout << std::setw(20) << "Birthday: ";
	std::getline(std::cin, buffer);
	c.set_birthday(buffer);
	std::cout << std::setw(20) << "Favorite meal: ";
	std::getline(std::cin, buffer);
	c.set_favorite_meal(buffer);
	std::cout << std::setw(20) << "Underwear color: ";
	std::getline(std::cin, buffer);
	c.set_underwear_color(buffer);
	std::cout << std::setw(20) << "Darkest secret: ";
	std::getline(std::cin, buffer);
	c.set_darkest_secret(buffer);
	contacts[*index] = c;
	if (*index < 8)
		(*index)++;
	std::cout << BOLD << "Contact added !" << RESET << std::endl << std::endl;
}

void print_contacts(Contact contacts[8], int *index)
{
	if (*index == 0)
	{
		std::cout << "No contacts yet !" << std::endl << std::endl;
		return ;
	}
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|" << std::setw(10) << std::left << "index";
	std::cout << "|" << std::setw(10) << std::left << "first name";
	std::cout << "|" << std::setw(10) << std::left << "last name";
	std::cout << "|" << std::setw(10) << std::left << "login" << "|" << std::endl;
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	for (int i = 0; i < *index; i++)
	{
		std::cout << "|" << std::setw(10) << std::left << i << "|";
		std::cout << std::setw(10) << std::left << truncate(contacts[i].get_first_name()) << "|";
		std::cout << std::setw(10) << std::left << truncate(contacts[i].get_last_name()) << "|";
		std::cout << std::setw(10) << std::left << truncate(contacts[i].get_login()) << "|";
		std::cout << std::endl;
		std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	}
	std::cout << std::endl;
}

std::string to_upper(std::string str)
{
	int str_len = str.length();

	for (int i = 0; i < str_len; i++)
		str[i] = std::toupper(str[i]);
	return str;
}
