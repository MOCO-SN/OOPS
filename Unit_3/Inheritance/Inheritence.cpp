#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    string contactNumber;
public:
    int age;
    string name;
};

class Researcher : public Student
{
public:
    string researchArea;
};

class PT : public Researcher
{
public:
    string subject;
    int salary;

    void display(PT t)
    {
        cout << "Name: " << t.name << endl;
        cout << "Age: " << t.age << endl;
        cout << "Research Area: " << t.researchArea << endl;
        cout << "Subject: " << t.subject << endl;
        cout << "Salary: " << t.salary << endl;
    }
};

int main(){

PT t1;
t1.name="john"; 
t1.age=25;
t1.researchArea="signal system";
t1.subject="signal system";
t1.salary=12500;

t1.display(t1);
    return 0;
}