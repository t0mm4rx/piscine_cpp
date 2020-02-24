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
#define PRINT(X) std::cout << X << std::endl

void go(char* src)
{
  std::string str(src);
  double      k;

  std::istringstream(str) >> k;

  // Char
  std::cout << "char:   ";
  if (k < CHAR_MIN || k > CHAR_MAX)
    PRINT("impossible");
  else if (std::isprint(k))
    PRINT(static_cast<unsigned char>(k));
  else
    PRINT("non displayable");
  // Int
  std::cout << "int:    ";
  if (k >= INT_MIN && k <= INT_MAX && !isnan(k) && !isinf(k))
    PRINT(static_cast<int>(k));
  else
    PRINT("impossible ");
  // Float
  std::cout << "float:  ";
  if (isnan(k))
    std::cout << "nan";
  else if (isinf(k))
    std::cout << "inf";
  else
    std::cout << static_cast<float>(k);
  PRINT("f");
  // Double
  std::cout << "double: ";
  if (isnan(k))
    PRINT("nan");
  else if (isinf(k))
    PRINT("inf");
  else
    PRINT(k);
}

int  main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cout << "Wrong usage: ./convert <number>" << std::endl;
    return (1);
  }
  go(argv[1]);
  return (0);
}