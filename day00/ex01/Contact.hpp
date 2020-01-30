#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void print(void);
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string login;
		std::string postal_address;
		std::string mail;
		std::string phone;
		std::string birthday;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
};

std::string truncate(std::string src);
void print_header(void);
void print_helper(void);
void listen_user(Contact contacts[8], int *index);
void handle_command(std::string cmd, Contact contacts[8], int *index);
void search(Contact contacts[8], int *index);
void add(Contact contacts[8], int *index);
void print_contacts(Contact contacts[8], int *index);

#endif
