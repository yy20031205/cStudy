#include <iostream>
#include <string>

using namespace std;

//带默认值的参数的默认构造函数，并使用初始化列表来设置成员

class Human
{
private:
  int age;
  string name;
public:
  Human(string humanName = "Admin", int humanAge = 25)
        :name(humanName), age(humanAge)
  {
    cout << "constructed a human called: " << name;
    cout << ", " << age << " years old" << endl;
  }
};

int main()
{
  Human admin;
  Human eve("Eve", 18);

  return 0;
}