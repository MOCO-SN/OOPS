#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		int age;
};
class Student : public Person{
   public:
    int roll ;	
};
class Researcher: public Student{
	public:
		string researchArea;
};

   int main(){
   	 Researcher s1;
		
		s1.name="Rakesh kumar";
		s1.roll=125;
		s1.researchArea="Signal System";
		
		cout<<s1.name<<endl;
		cout<<s1.roll<<endl;
		cout<<s1.researchArea<<endl;
		
		return 0; 
   }
 
