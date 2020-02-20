#include <iostream>
#include <string>

template <typename T> void iter(T *array, unsigned int length, void (*f)(T &elem))
{
  for (int i = 0; i < length; i++) {
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

void printList(int *list, unsigned int length)
{
  for (int i = 0; i < length; i++)
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
}
