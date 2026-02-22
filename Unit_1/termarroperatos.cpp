#include<iostream>

using namespace std;

int main(){

    // Termary operators(conditional operators)

    string enter = "Enter Value for checking the value is even or odd";
    int a;
    cout<<enter;
    cin>>a;

    //syntax 

    //int b,c;

    // (a==b) ? when a is equal to b output is true : else false;

    (a==0) ? cout<<"not defined" : (a%2==0) ? cout<<"Even" :cout<<"Odd";

    return 0;
}