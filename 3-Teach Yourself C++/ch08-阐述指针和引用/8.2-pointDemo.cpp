#include <iostream>

using namespace std;

/*
更安全的指针编程样例
*/
int main()
{
  cout << "Is it sunny (y/n)? ";
  char  userInput = 'y';
  cin >> userInput;

  bool * const isSunny = new bool; // 指针声明并做初始化
  *isSunny = true;

  if(userInput == 'n')
    *isSunny = false;
  cout << "Bool flag sunny says: " << isSunny << endl;

  delete isSunny;  // 释放内存

  return 0;
}