#include <iostream>

int main()
{
  using namespace std;

  int yams[3];
  yams[0] = 7;
  yams[1] = 8;
  yams[2] = 6;

  int yamcosts[3] = {20, 30, 5};

  cout << "Total yams: ";
  cout << yams[0] + yams[1] + yams[2] << " yams costs." << endl;

  cout << yamcosts[1] << " cents per yam.\n" << endl;  

  return 0;
}