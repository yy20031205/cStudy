#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
  string name;
  int age;
public:
  Human() // 默认构造函数,完成age初始化,防止忘记给age赋值而导致不是随机值
  {
    age = 0;
    cout << "constructed an instance of class Human" << endl;
  }
   /* 
   // 构造函数重载
  Human(string humanName, int humanAge)
  {
    name = humanName;
    age = humanAge;
  }
  */
  void SetName(string humanName)
  {
    name = humanName;
  }
  void SetAge(int humanAge)
  {
    age = humanAge;
  }

  void IntroduceSelf()
  {
    cout << "I am " + name << " and am ";
    cout << age << " years old" << endl;
  }
};

int main()
{
    Human firstMan;
    firstMan.SetName("tom");
    firstMan.SetAge(28);

    firstMan.IntroduceSelf();

    return 0;
}