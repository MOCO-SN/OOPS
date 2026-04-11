#include<iostream>
using namespace std;

class Animal
{
public:
    void fun() // early binding 
    {
        cout<<"Sound of Animal"<<endl;
    }
};

class Lion : public Animal{

    public: 
    void fun() // late binding
    {
        cout<<"Sound of Mukesh miao miao"<<endl;
    }
};



int main(){
 
    Lion a;
    a.fun();
    return 0;
}