#include <iostream>

constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main()
{
  using namespace std;

  const double pi = 22.0 / 7;

  cout << "constant pi vaule: " << pi << endl;
  cout << "GetPi return vaule: " << GetPi() << endl;
  cout << "TwicePi return vaule: " << TwicePi() << endl;

  return 0;
}
