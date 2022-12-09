#include <iostream>

// converts stone to pounds

int stonetolb(int);

int main()
{
  int stone;
  std::cout << "Enter the weight of stone: ";
  std::cin >> stone;
  int pounds = stonetolb(stone);
  std::cout << stone << " stones = ";
  std::cout << pounds << " pounds. " << std::endl;

  return 0;
}

int stonetolb(int s)
{
  return 14 * s;
}