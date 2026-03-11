#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    int add()
    {
    }
    int add(int x)
    {
        return x;
    }
    int add(int x, int y)
    {
        return x + y;
    }
};

int main()
{

    Person p1;
    p1.add();
    cout<<p1.add(2);
    cout<<p1.add(10,10);
    return 0;
}