#include <iostream>

using namespace std;

/*
 递归函数实现计算斐波纳契数列中的第index个数字
 fib(n) = fib(n-1) + fib(n-2)
*/

int GetFibNumber(int index)
{
  if(index < 2)
  {
    return index;
  }
  else
    return GetFibNumber(index -1) + GetFibNumber(index - 2);
}

int main()
{
  cout << "Enter index: ";
  int index = 0;
  cin >> index;

  cout << "Fib number is: " << GetFibNumber(index) << endl;

  return 0;
}