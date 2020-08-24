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
		void				print(void);
		void				set_first_name(std::string first_name);
		void				set_nick_name(std::string nick_name);
		void				set_last_name(std::string last_name);
		void				set_login(std::string login);
		void				set_postal_address(std::string postal_address);
		void				set_mail(std::string mail);
		void				set_phone(std::string phone);
		void				set_birthday(std::string birthday);
		void				set_favorite_meal(std::string favorite_meal);
		void				set_underwear_color(std::string underwear_color);
		void				set_darkest_secret(std::string darkest_secret);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_login(void);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	login;
		std::string	postal_address;
		std::string	mail;
		std::string	phone;
		std::string	birthday;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
};

std::string	to_upper(std::string str);
std::string	truncate(std::string src);
void				print_header(void);
void				print_helper(void);
void				listen_user(Contact contacts[8], int *index);
void				handle_command(std::string cmd, Contact contacts[8], int *index);
void				search(Contact contacts[8], int *index);
void				add(Contact contacts[8], int *index);
void				print_contacts(Contact contacts[8], int *index);

#endif
