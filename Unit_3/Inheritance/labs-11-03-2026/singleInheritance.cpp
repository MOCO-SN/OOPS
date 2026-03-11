#include<iostream>
#include<string>

using namespace std;

class Person
{
public:
string name;
int age;
string address;
};

class Employee : public Person{ // single inheritance
    private:
    int salary;
    public:
    string Dept;

    void setSalary(double salary){
        this->salary = salary;
    }

    int getSalary(){
        return salary;
    }
    
    void viewEmp(Employee e){
        cout<<e.name<<endl;
        cout<<e.Dept<<endl;
        cout<<e.age<<endl;
        cout<<e.address<<endl;
        cout<<e.getSalary()<<endl;
}
 
};

 

int main(){

    Employee e1;

    e1.name = "Mukesh";
    e1.age = 21;
    e1.address = "Chapra";
    e1.Dept = "Labour";
    e1.setSalary(150);
    
    e1.viewEmp(e1);
    
    return 0;
}