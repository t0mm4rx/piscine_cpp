/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 09:27:27 by tmarx             #+#    #+#             */
/*   Updated: 2020/02/18 10:25:41 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <math.h>

void	go(char* src)
{
	std::string	str;
	double		k;
	int			strStart(0);
	int			strSize(0);

	while (src[strStart] && std::isspace(src[strStart]))
		strStart++;
	while (src[strStart + strSize] && !std::isspace(src[strStart + strSize]))
		strSize++;
	str = std::string(src, strStart, strSize);
	if (str.length() == 1 && isprint(str[0]))
	{
		k = str[0];
	}
	else
	{
		try
		{
			k = std::stod(str);
		}
		catch (std::exception &e)
		{
			std::cout << "No conversion found!" << std::endl;
			std::cout << "char:   impossible" << std::endl;
			std::cout << "int:    impossible" << std::endl;
			std::cout << "float:  impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
	}
	std::cout << "char:   ";
	if (k < CHAR_MIN || k > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(k))
		std::cout << static_cast<unsigned char>(k) << std::endl;
	else
		std::cout << "non displayable" << std::endl;
	std::cout << "int:    ";
	if (k >= INT_MIN && k <= INT_MAX && !isnan(k) && !isinf(k))
		std::cout << static_cast<int>(k) << std::endl;
	else
		std::cout << "impossible " << std::endl;
	std::cout << "float:  ";
	if (isnan(k))
		std::cout << "nan";
	else if (isinf(k))
		std::cout << "inf";
	else
		std::cout << static_cast<float>(k);
	std::cout << "f" << std::endl;
	std::cout << "double: ";
	if (isnan(k))
		std::cout << "nan" << std::endl;
	else if (isinf(k))
		std::cout << "inf" << std::endl;
	else
		std::cout << k << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong usage: ./convert <number>" << std::endl;
		return (1);
	}
	go(argv[1]);
	return (0);
}
