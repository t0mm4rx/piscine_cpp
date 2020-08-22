#include "Contact.hpp"

void listen_user(Contact contacts[8], int *index)
{
	std::string cmd;

	while (std::cin >> cmd)
		handle_command(cmd, contacts, index);
}

void handle_command(std::string cmd, Contact contacts[8], int *index)
{
	if (cmd == "EXIT")
		exit(0);
	if (cmd == "ADD")
		add(contacts, index);
	if (cmd == "SEARCH")
		search(contacts, index);
}

void search(Contact contacts[8], int *index)
{
	std::string buffer;
	int detail;

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
	Contact c;

	std::cin.ignore();
	std::cout << "First name: ";
	std::getline(std::cin, c.first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, c.last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, c.nick_name);
	std::cout << "Login: ";
	std::getline(std::cin, c.login);
	std::cout << "Postal address: ";
	std::getline(std::cin, c.postal_address);
	std::cout << "Mail: ";
	std::getline(std::cin, c.mail);
	std::cout << "Phone: ";
	std::getline(std::cin, c.phone);
	std::cout << "Birthday: ";
	std::getline(std::cin, c.birthday);
	std::cout << "Favorite meal: ";
	std::getline(std::cin, c.favorite_meal);
	std::cout << "Underwear color: ";
	std::getline(std::cin, c.underwear_color);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, c.darkest_secret);
	contacts[*index] = c;
	if (*index < 7)
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
		std::cout << std::setw(10) << std::left << truncate(contacts[i].first_name) << "|";
		std::cout << std::setw(10) << std::left << truncate(contacts[i].last_name) << "|";
		std::cout << std::setw(10) << std::left << truncate(contacts[i].login) << "|";
		std::cout << std::endl;
		std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	}
	std::cout << std::endl;
}
