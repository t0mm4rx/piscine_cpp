#include <iostream>
#include <string>

class A
{
	private:
		int _n;
	public:
		A(int n = 0) : _n(n)
		{};
		int getN(void) const
		{
			return (_n);
		};
		bool operator>(const A &other)
		{
			return (_n > other._n);
		};
		bool operator<(const A &other)
		{
			return (_n < other._n);
		};
};

template <typename T> void iter(T *array, unsigned int length, void (*f)(T &elem))
{
  for (unsigned int i = 0; i < length; i++) {
    f(array[i]);
  }
}

void fn(int &i)
{
  i *= 2;
}

void fn2(std::string &s)
{
  std::cout << s << " ";
}

void fn3(A &s)
{
  std::cout << s.getN() << " ";
}

void printList(int *list, unsigned int length)
{
  for (unsigned int i = 0; i < length; i++)
    std::cout << list[i] << " ";
  std::cout << std::endl;
}

int main(void)
{
  int list[] = {0, 2, 3, -5, 6, 42, 8};
  std::string list2[] = {"Hey!", "Hello world,", "what's up?"};
  printList(list, 7);
  iter(list, 7, &fn);
  printList(list, 7);
  iter(list2, 3, &fn2);
  std::cout << std::endl;
  A list3[3];
  list3[0] = A(21);
  list3[1] = A(42);
  list3[2] = A(-42);
  iter(list3, 3, &fn3);
  std::cout << std::endl;
}
