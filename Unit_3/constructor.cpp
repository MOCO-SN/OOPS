#include<iostream>
using namespace std;

class Student{
 public:
    string name;
    int roll;


    // when in class one construcotor exits it is call single constructor.

    // and whem in class more than one class exits it is call mutliple constructor.

    Student(){
        // default Constructor
    }
    Student(string n){ // parametrized constructor
        name =  n;
    }
    Student(string n, int r){
        name = n;
        roll = r;
    }

    void Display(Student s){
        cout <<s.name<<endl;
        cout <<s.roll<<endl;
    }
};
int main()
{


    Student s1("Sachin",49);
s1.Display(s1);
    


    
}