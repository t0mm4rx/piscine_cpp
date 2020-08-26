#include "Fixed.hpp"
#include <iostream>

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "A: " << a << std::endl;
	std::cout << "++A: " << ++a << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "A++: " << a++ << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;
	std::cout << "Max(A, B): " << Fixed::max(a, b) << std::endl;
	std::cout << "Min(A, B): " << Fixed::min(a, b) << std::endl;
	std::cout << "A / B: " << a / b << std::endl;
	std::cout << "42.5 / 21.14: " << Fixed(42.5f) / Fixed(21.14f) << std::endl;
	std::cout << "A * B: " << a * b << std::endl;
	std::cout << "42.42 * 21.21: " << Fixed(42.42f) * Fixed(21.21f) << std::endl;
	std::cout << "A + B: " << a + b << std::endl;
	std::cout << "A - B: " << a - b << std::endl;
	return (0);
}
