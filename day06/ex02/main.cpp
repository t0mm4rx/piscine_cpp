#include "Base.hpp"
#include "Classes.hpp"
#include <iostream>

Base::~Base(void) {}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	Base	a;
	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast err) {}
	try
	{
		a = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast err) {}
	try
	{
		a = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast err) {}
}

int		main(void)
{
	Base	*a = new A();
	Base	*b = new B();
	Base	*c = new C();

	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);
	std::cout << std::endl;
	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);

	delete a;
	delete b;
	delete c;
	return (0);
}
