#include<iostream>
#include<string>

using namespace std;

class BmwEmp{
    private:
    int salary;

    public:
    string name;
    int age;
    string dept;

    void setSalary(double salary){
        this->salary = salary;
    }

    int getSalary(){
        return salary;
    }

    void viewData(BmwEmp b){
        cout<<b.name<<endl;
        cout<<b.dept<<endl;
        cout<<b.age<<endl;
        cout<<b.getSalary()<<endl;
    }
};


int main(){
    BmwEmp e1;
    e1.name = "Sachin";
    e1.age = 20;
    e1.dept = "Designer";
    e1.setSalary(25000);

    e1.viewData(e1);

    return 0;
}