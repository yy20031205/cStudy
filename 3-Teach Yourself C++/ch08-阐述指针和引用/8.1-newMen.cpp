#include <iostream>

using namespace std;

/*
内存动态申请和释放
*/
int main()
{
  int *pointAge = new int;

  cout << "Enter your age: ";
  cin >> *pointAge;

  cout << "Age " << *pointAge << " is store at " << pointAge << endl;

  delete pointAge;

  return 0;
}