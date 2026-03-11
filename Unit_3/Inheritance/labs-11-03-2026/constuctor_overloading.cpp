#include <iostream>
#include <string>
using namespace std;
class Person
{
public:

    Person()
    {
    }
    Person(int x)
    {
      cout<<x<<endl;
    }
    Person(int x, int y)
    {
          cout<<x<<endl;
          cout<<y<<endl;
    }
};

int main()
{

    Person p1;

    Person p2(10);
    Person p3(10,20);
 
    
    return 0;
}