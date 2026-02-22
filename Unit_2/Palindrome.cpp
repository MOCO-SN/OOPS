#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	int InputUser, Calc, Reverse =0;
	
	cout<<"Enter a number."<<endl;
	cin>>InputUser;
	
	int NewVal = InputUser;
	
	while(InputUser!=0){
		
		Calc = InputUser%10;	
		Reverse = Reverse * 10 + Calc;
		
		InputUser = InputUser /10; 
	}
	
//	cout <<	Reverse;
	
	if (NewVal == Reverse){
		cout<<"Number is Palindrome : "<<Reverse;
	}
	else{
		cout<<"Number is not Palindrome : "<<Reverse;
	} 
	return 0;
}