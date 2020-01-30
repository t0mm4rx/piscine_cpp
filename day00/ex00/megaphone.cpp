#include <iostream>
#include <cstring>
#include <cctype>

void print_capitalized(char *src)
{
	int len = strlen(src);

	for (int i = 0; i < len; i++)
		std::cout << (char)toupper(src[i]);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
			print_capitalized(argv[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
