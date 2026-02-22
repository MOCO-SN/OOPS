#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	
	cout <<"Right Trangle with characters"<<endl;
	for(int i=1; i<=4;i++){
		char start = 'A';
		for(int j=1;j<=i;j++){
			cout<<start<<" ";
			start++;
		}
			cout<<endl;
	}

		return 0;
}