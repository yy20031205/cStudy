#include <iostream>

// define own funcition

void simon(int); // function prototype for simon()

int main()
{
  using namespace std;
  simon(3);
  cout << "Pick an integer: ";
  int count;
  cin >> count;
  simon(count);
  cout << "Done!" << endl;

  return 0;
}

void simon(int n) 
{
  std::cout << "Simon says touch toes " << n << " times." << std::endl;
}