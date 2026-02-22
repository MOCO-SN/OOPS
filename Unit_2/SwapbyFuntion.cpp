#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void SwapValue(int a,int b){
	int temp;
	temp = a;
	a= b;
	b= temp;
	
	cout<< "Swapped by Val " <<a<<" : "<<b<<endl;
}
void SwapRef(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
	cout<< "Swapped by Ref " <<*a<<" : "<<*b<<endl;
	
	cout<< "Swapped by Ref of Memory" <<a<<" : "<<b<<endl;
}
int main() {
	

	int input1, input2, SwapByVal, SwapByRef;
	
	cout<<"Enter Numbers"<<endl;
	cin>>input1>>input2;
	
	cout<< "Before Swap by Val " <<input1<<" : "<<input2<<endl;
	SwapValue(input1, input2);
	
	cout<< "Before Swap by Ref " <<input1<<" : "<<input2<<endl;
	SwapRef(&input1, &input2);
	
	 
	return 0;
}