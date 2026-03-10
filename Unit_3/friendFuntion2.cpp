#include<iostream>
#include<string>

using namespace std;

// The friend funtion have rights to access non-members funtion and has ability to access the private data of the class

class Test{
    public:
    int x;
    friend void fun();
};

void fun(){
    Test t1;

    t1.x = 100;
    cout<<t1.x<<endl;
}

int main(){

    fun();

    return 0;
}