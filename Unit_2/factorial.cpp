#include<iostream>

using namespace std;

int main(){


    // n number factorial;

    string user = "Enter Number for checking Factorial of n number.";
    int inputNum, fact, i;

    cout<<user<<endl;
    cin>>inputNum;

    fact = 1;

    for(i = 1; i<= inputNum; i++)
    { 
        fact = fact * i;
    }
    
    cout<<fact<<endl;

}