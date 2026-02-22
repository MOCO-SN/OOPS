#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	int pattern;
	
	cout<<"Enter Numbers for Print the Pattern in times."<<endl;
	cin>>pattern;
	
	cout<<"Right Trangle with stars"<<endl;
	for(int i; i<=pattern;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
			cout<<endl;
	}


	cout <<"Right Trangle with Numbers"<<endl;
	for(int i; i<=pattern;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
			cout<<endl;
	}
	
	cout <<"Reverse Trangle with Stars"<<endl;
	for(int i=1; i<=pattern;i++){
		for(int j=1;j<=pattern-i+1;j++){
			cout<<"*";
		}
			cout<<endl;
	}
	
	cout <<"Pyramid with Stars"<<endl;
	cout<<endl;
	for(int i=1; i<=pattern;i++){
		for(int j=1;j<=pattern-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<"*";
		}
			cout<<endl;
	}
	
	cout <<"Pyramid with Numbers"<<endl;
	for(int i=1; i<=pattern;i++){
		for(int j=1;j<=pattern-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<k;
		}
			cout<<endl;
	}
	
	cout <<"Floyds with Numbers"<<endl;
	int nums =1;
	for(int i=1; i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<nums<<" ";
			nums++;
		}
			cout<<endl;
	}
	
		return 0;
}