#include <iostream>

template <typename T> void swap(T &a, T &b)
{
  T tmp;
  tmp = a;
  a = b;
  b = tmp;
}

template <typename T> T& min(T &a, T &b)
{
  return (a < b ? a : b);
}

template <typename T> T& max(T &a, T &b)
{
  return (a > b ? a : b);
}

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

int main(void)
{
  int a = 2;
  int b = 3;
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
  std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
  std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
  A e(42);
  A f(21);
  ::swap(e, f);
  std::cout << "e = " << e.getN() << ", f = " << f.getN() << std::endl;
  std::cout << "min(e, f) = " << ::min(e, e).getN() << std::endl;
  std::cout << "max(e, f) = " << ::max(f, f).getN() << std::endl;
  return 0;
}
