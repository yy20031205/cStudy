#include <iostream>

// print message

void printMsg();
void printMessage();

int main()
{
  printMsg();
  printMsg();

  printMessage();
  printMessage();

  return 0;
}

void printMsg()
{
  using namespace std;
  cout << "Three blind mice " << endl;
}

void printMessage()
{
  using namespace std;
  cout << "See how they run " << endl;
}