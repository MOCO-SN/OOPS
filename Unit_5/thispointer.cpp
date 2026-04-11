#include<iostream>
#include <string>

using namespace std;


 // this pointer is used for when we have variable name is same so we overwrite with this pointer.
 
class Person{
    public:
    string name;
    int roll;

    void updateName(string name){
        this->name =  name;
    }
    void updateRoll(int roll){
        this->roll =  roll;
    }

    void Display(Person p){
     cout<<   p.name<<endl;
     cout<<   p.roll<<endl;
    }
};

int main(){
    

    Person p1;

    p1.name = "Sachin";

    p1.roll = 49;

    cout<<"Default stored Data's "<<endl;
    p1.Display(p1);

    p1.updateName("Moco");
    p1.updateRoll(7);

    cout<<"Updated Data's"<<endl;
    p1.Display(p1);
    return 0;
    
}