#include <iostream>
#include <string>

// print your name and address

int main()
{
  using namespace std;

  string name;
  string address;

  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your address: ";
  cin >> address;

  cout << "Your name is " << name << endl;
  cout << "Your address is " << address << endl;

  return 0;
}