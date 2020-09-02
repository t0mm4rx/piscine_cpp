#include "Base.hpp"
#include "Classes.hpp"
#include <iostream>
#define PRINT(X) std::cout << X << std::endl

Base::~Base(void) {}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		PRINT("A");
	if (dynamic_cast<B *>(p))
		PRINT("B");
	if (dynamic_cast<C *>(p))
		PRINT("C");
}

void identify_from_reference(Base &p)
{
	Base	a;
	try
	{
		a = dynamic_cast<A&>(p);
		PRINT("A");
	}
	catch (std::bad_cast err) {}
	try
	{
		a = dynamic_cast<B&>(p);
		PRINT("B");
	}
	catch (std::bad_cast err) {}
	try
	{
		a = dynamic_cast<C&>(p);
		PRINT("C");
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
	PRINT("");
	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);

	delete a;
	delete b;
	delete c;
	return (0);
}
