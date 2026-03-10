// multiple inheritance

#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		string name;
		int roll;
};
class Teacher{
   public:
    string subject;
	int salary;	
};
class PT: public Student, public Teacher{
 
};

   int main(){
   	 PT t1;
   	  t1.name="john";
   	  t1.subject="signal system";
   	  t1.salary=12500;
   	  
   	  cout<<t1.name<<endl;
   	  cout<<t1.subject<<endl;
   	  cout<<t1.salary<<endl;
  
		
		return 0;            
   }
