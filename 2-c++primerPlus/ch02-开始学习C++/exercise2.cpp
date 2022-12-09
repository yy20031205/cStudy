#include <iostream>

// 输入一个距离，将其转换为码
long convert(long);

int main()
{
  using namespace std;

  long s;

  cout << "Enter a number s: ";
  cin >> s;

  cout << "You enter is " << convert(s) << endl;
  
  return 0;
}

long convert(long s)
{
  return 220 * s;
}