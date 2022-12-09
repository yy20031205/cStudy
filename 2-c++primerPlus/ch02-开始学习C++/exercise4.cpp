#include <iostream>

// 输入年龄，显示该年龄包含多少个月

int main()
{
  using namespace std;

  int age;

  cout << "Enter your age: ";
  cin >> age;

  cout << "Your age of month is " << 12 * age << endl;

  return 0;
}