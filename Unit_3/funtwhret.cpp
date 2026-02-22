#include<iostream>
using namespace std;

int Add(int a,int b); // funtion declration

int main()
{
    int input1,input2;
    cout<<"Enter for add the Numbers"<<endl;
    cin>>input1>>input2;

    cout<<"Sum is "<<Add(input1, input2); // funtion call
}

int Add(int a, int b){ // funtion defination
    return a+b;
}
