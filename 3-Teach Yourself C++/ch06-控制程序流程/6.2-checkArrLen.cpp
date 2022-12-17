#include <iostream>
#include <string>
#include <string.h>

/*
在字符串复制到数组之前，检查数组容量
*/

using namespace std;

int main()
{
  cout << "Enter a line of text: " << endl;
  string userInput;
  getline(cin, userInput);

  char copyInput[20] = { '\0' };
  if (userInput.length() < 20)
  {
    strcpy(copyInput, userInput.c_str());
    cout << "copyInput cntains: " << copyInput << endl;
  }
  else
    cout << "won't copy!" << endl;
  return 0;
}