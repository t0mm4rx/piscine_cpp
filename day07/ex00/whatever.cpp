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

int main(void)
{
  int a = 5;
  int b = 42;

  std::cout << a << " & " << b << std::endl;
  swap(a, b);
  std::cout << a << " & " << b << std::endl;

  std::cout << "min: " << min(a, b) << std::endl;
  std::cout << "max: " << max(a, b) << std::endl;

}
