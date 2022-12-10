#include <iostream>
#include <climits>

#define ZERO 0

int main()
{
  using namespace std;

  short sam = SHRT_MAX;
  unsigned short sue = sam;

  cout << "Sam has " << sam << " dollars and Sue has " << sue;
  cout << " dollars deposited. " << endl;
  cout << "Add $1 to each account." << endl;
  cout << "Now ";

  sam = sam + 1;
  sue = sue + 1;
  cout << " Sam has " << sam << " dallors and Sue has " << sue;
  cout << " dallars deposited.\nPoor Sam" << endl;

  sam = ZERO;
  sue = ZERO;
  cout << "Sam has " << sam << " dollors and Sue has " << sue;
  cout << " dollars desposited." << endl;
  cout << "Take $1 from each account." << endl << "Now ";

  sam = sam - 1;
  sue = sue - 1;
  cout << "Sam has " << sam << " dorrors and Sue has " << sue;
  cout << " dollars despisted. " << endl;
  cout << "Luck Sue! " << endl;

  return 0;

}