#include <iostream>

void convert(double);

int main()
{
  using namespace std;

  double year;
  cout << "Enter the number of light years: ";
  cin >> year;

  convert(year);
  return 0;
}

void convert(double year)
{
  using namespace std;

  double unit = 63240 * year;
  cout << year << " light years = " << unit << " astronomical units." << endl;
  
}