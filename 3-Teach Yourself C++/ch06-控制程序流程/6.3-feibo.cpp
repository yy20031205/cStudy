#include <iostream>

using namespace std;

/* 
斐波纳契数列实现
*/

int main()
{
  const int nums = 5;
  cout << "This program will " << nums << endl;

  int num1 = 0, num2 = 1;
  char wantMore = '\0';
  cout << num1 << " " << num2 << " ";

  do
  {
    for(int counter = 0; counter < nums; ++counter)
    {
      cout << num1 + num2 << " ";
      int temp = num2;
      num2 = num1 + num2;
      num1 = temp;
    }
    cout << endl << "Do you want more numbers (y/n)? ";
    cin >> wantMore;
  }while(wantMore == 'y');

  cout << "Bye Bye!" << endl;

  return 0;
}