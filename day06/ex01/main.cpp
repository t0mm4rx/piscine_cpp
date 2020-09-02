#include <iostream>
#include "main.hpp"

void	*serialize(void)
{
	const char	alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char		*res = new char[16 + sizeof(int)];

	for (int i = 0; i < 8; i++)
		res[i] = alph[std::rand() % 62];
	*reinterpret_cast<int*>(res + 8) = std::rand();
	for (int i = 8 + sizeof(int); (unsigned int)i < 16 + sizeof(int); i++)
		res[i] = alph[std::rand() % 62];
	return ((void*)res);
}

Data 	*deserialize(void *addr)
{
	Data	*data = new Data;
	char	*raw = reinterpret_cast<char*>(addr);

	data->s1 = std::string(raw, 8);
	data->s2 = std::string(raw + 8 + sizeof(int), 8);
	data->n = *reinterpret_cast<int *>(raw + 8);
	return (data);
}

int		main(void)
{
	void	*addr = serialize();
	Data	*data = deserialize(addr);

	std::srand(time(0));
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	std::cout << "n : " << data->n << std::endl;

	delete reinterpret_cast<char*>(addr);
	delete data;
	return (0);
}
