#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary;

public:
    string name;
    int age;
    string dept;

    Teacher()
    {
        
    }

    Teacher(string name, int age, string dept)
    {
        this->name = name;
        this->age = age;
        this->dept = dept;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    void display(Teacher t)
    {
        cout << "Name: " << t.name << endl;
        cout << "Age: " << t.age << endl;
        cout << "Department: " << t.dept << endl;
        cout << "Salary: " << t.salary << endl;
    }
    int getSalary()
    {
        return salary;
    }

    void updateSalary(double newSalary)
    {
        salary = newSalary;
    }
};

int main()
{
    Teacher t1("Alice", 30, "Mathematics");
    t1.setSalary(50000);
    t1.display(t1);
    return 0;
}