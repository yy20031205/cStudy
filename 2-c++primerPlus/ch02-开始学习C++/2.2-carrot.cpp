#include <iostream>

int main()
{
  using  namespace std;
  int carrots;

  carrots = 25;
  cout << "I have ";
  cout << carrots;   // print variable
  cout << " carrots.";
  cout << endl;
  carrots = carrots - 1;
  cout << "Crunch, Now I have " << carrots << " carrots." << endl;

  return 0;
}