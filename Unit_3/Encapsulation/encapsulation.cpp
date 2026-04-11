#include<iostream>
#include<string>
using namespace std;

// getter and setter the value of the variable and it will to view and store the values in the private and protected variables

// it is also called Acessor and Mutator

class Teacher{

    private:
    double salary;

    public:
    string name;
    string age;
    string dept;
    string Contact;

    void setSalery(double s){
        salary = s;
    } 

    int getSalery(){
        return salary;
    }

    void viewTecher(Teacher t){
        cout<<t.name<<endl;
        cout<<t.age<<endl;
        cout<<t.dept<<endl;
        cout<<t.Contact<<endl;
        cout<<t.getSalery()<<endl;
    }
};


int main(){
    Teacher t1;

    t1.name = "Masoom Sir";
    t1.age = "25";
    t1.Contact = "9824584998";
    t1.dept = "OOP'S";
    t1.setSalery(25000);


    t1.viewTecher(t1);

}