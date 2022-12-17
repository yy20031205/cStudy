#include <iostream>

using namespace std;

int main()
{
  cout << "Enter two intergers: " << endl;
  int num = 0 , num2 = 0;
  cin >> num;
  cin >> num2;

  cout << "Enter \'m\' to multiply,anything else to add: ";
  char userSelection = '\0';
  cin >> userSelection ;

  int res = 0;
  if(userSelection == 'm'){
    res = num * num2;
  }
  else
    res = num + num2;
  
  cout << "res is: " << res << endl;

  return 0;
}