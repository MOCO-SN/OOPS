#include<iostream>
#include<string>

// it is a process of creating property, special funtionality and extra feature of the derived class.

//  it have four types there are following.

// Single inheritance
// Multiple ||
// Multilevel ||
// Herarchical ||
// Hybrid ||
 
using namespace std;
class Person{
    public:

    string name;
    string age;
    
};

class Student : public Person{
    public:

    int roll;
    void viewStd(Student s){
        cout<<s.name<<endl;
        cout<<s.age<<endl;
        cout<<s.roll<<endl;
    }
};

class Teacher : public Person{
    public:

    string dept;

    void viewTech(Teacher t){
        cout<<t.name<<endl;
        cout<<t.age<<endl;
        cout<<t.dept<<endl;
    }
};

int main(){

    Teacher t1;

    t1.name = "Sachin";
    t1.age = "20";
    t1.dept = "OOP'S";

    cout<<"Teacher data"<<endl<<endl;
    t1.viewTech(t1);


    Student s1;

    s1.name = "Mukesh";
    s1.age = "21";
    s1.roll = 2;
    
    cout<<"Student Data"<<endl<<endl;
    s1.viewStd(s1);
}
