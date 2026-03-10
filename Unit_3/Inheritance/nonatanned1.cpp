// WAP in C++ of Inheritence concept of oops. also single level inheritance

#include <iostream>
#include <string>
using namespace std;

class Person
{ // Base (parent class)
public:
	string name;
	int age;
};
class Student : public Person
{ // inherit (derived class)
public:
	int roll;

	void getinfo()
	{ // function
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Roll:" << roll << endl;
	}
};
int main()
{ // main
	Student s1;
	s1.name = "Rahul";
	s1.age = 23;
	s1.roll = 124;

	s1.getinfo(); // function call
	return 0;
}
