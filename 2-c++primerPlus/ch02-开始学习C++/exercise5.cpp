#include <iostream>

// 摄氏度转为华氏

void convert(float);

int main()
{
  using namespace std;

  float c;

  cout << "Please enter a Celsius value: ";
  cin >> c;
  convert(c);
  return 0;
}

void convert(float c)
{
  float h;
  h = 1.8 * c + 32.0;

  std::cout << c << " degress Celsius is " << h << " degrees Fahrenheit." << std::endl;
}