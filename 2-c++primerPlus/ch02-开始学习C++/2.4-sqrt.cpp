#include <iostream>
#include <cmath>

int main()
{
  using namespace std;

  double area;
  cout << "Enter the floor area, in square feet, of your home: ";
  cin >> area;

  double side;
  side = sqrt(area);
  cout << "That is the equivalent of squarea " << side << " feet to the side." << endl;

  return 0;
}