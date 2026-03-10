#include<iostream>
#include<string>

using namespace std;

class Add{
    public:
    int add(){ // funtion with no arguments
        cout<<"no parameter here"<<endl;
    }
    int add(int x){ // single argument
        cout<<x<<endl;
    }
    int add(int x, int y){ // double arguments
        return x+y;
    }
    
    int add(int x, int y, int z){ // triple arguments
        return x+y+z;
    }
};
 
int main()
{
    Add a1;
    a1.add();
    a1.add(10);
    cout<<a1.add(20,30)<<endl;
    cout<<a1.add(20,30,40)<<endl;
    
    return 0;
}