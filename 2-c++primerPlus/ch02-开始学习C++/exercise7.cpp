#include <iostream>

void printMsg(int,int);
using namespace std;

int main()
{
  int hour;
  int minutes;

  cout << "Enter the number of hours: ";
  cin >> hour;
  cout << "Enter the number of minutes: ";
  cin  >> minutes;

  printMsg(hour,minutes);

  return 0;
}

void printMsg(int hour, int minutes)
{
  cout << "Time: " << hour << ":" << minutes << endl;
}