#include "Contact.hpp"

int main()
{
	Contact contacts[8];
	int current_index = 0;
	print_header();
	print_helper();
	listen_user(contacts, &current_index);
	return (0);
}

void print_header()
{
	std::cout << "        ||" << std::endl;
	std::cout << "  ______||" << std::endl;
	std::cout << " / ____ o|" << std::endl;
	std::cout << "| / ;; \\ |" << std::endl;
	std::cout << "| ______ |" << std::endl;
	std::cout << "||______||" << std::endl;
	std::cout << "||      ||        " << BOLD << BLUE << "An incredible phonebook" << RESET << std::endl;
	std::cout << "||______||        by " << BOLD << BLUE << "tmarx" << RESET << std::endl;
	std::cout << "|'\\[--]/'|        42life" << std::endl;
	std::cout << "|  ¨''¨  |" << std::endl;
	std::cout << "|  ''''  |" << std::endl;
	std::cout << "|        |" << std::endl;
	std::cout << "|        |" << std::endl;
	std::cout << "|        |" << std::endl;
	std::cout << "|________|" << std::endl;
	std::cout << std::endl;
}

void print_helper()
{
	std::cout << "Commands" << std::endl;
	std::cout << BOLD << std::setw(10) << std::left << "ADD" << RESET;
	std::cout << "Add a new contact in the phone book" << std::endl;
	std::cout << BOLD << std::setw(10) << std::left << "SEARCH" << RESET;
	std::cout << "Display phone book and get detail for one contact" << std::endl;
	std::cout << BOLD << std::setw(10) << std::left << "EXIT" << RESET;
	std::cout << "Exit the phone book, and lose all data into the deep void of the computer memory" << std::endl;
	std::cout << std::endl;
}

std::string truncate(std::string src)
{
	if (src.length() > 10)
		return src.substr(0, 9) + ".";
	return src;
}
