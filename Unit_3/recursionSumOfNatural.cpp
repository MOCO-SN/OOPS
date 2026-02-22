#include<iostream>
using namespace std;
int Sum(int a); // funtion declaration
 int main(){
    int inp1;
    cout<<"Enter num for Sum of Natural Numders."<<endl;
    cin>>inp1;
    cout<<Sum(inp1); // funtions call

    return 0;
}

int Sum(int a){ // defination
    if(a == 1){ // base case 
        return 1;
    }
    else {
        return a + Sum(a -1); // Recursive call
    }
    return 0;
}