#include <iostream>
#include <string>
using namespace std;

// A is parent class when the A class properties are access with another two or more than two, class is known as hierarchical inheritance

class Person
{
public:
    string name;
};

class Student : public Person
{
public:
    int roll;
void viewStudent(Student s){
        cout<<s.name<<endl;
        cout<<s.roll<<endl;
    }
};

class Teacher : public Person
{
public:
    string dept;

    void viewTeacher(Teacher t){
        cout<<t.name<<endl;
        cout<<t.dept<<endl;
    }
};


int main()
{

    Teacher t1;

    t1.name = "Sachin";
    t1.dept = "OOP's";

    t1.viewTeacher(t1);

       Student s1;

    s1.name = "Sachin";
    s1.roll = 3;

    s1.viewStudent(s1);

    return 0;
}