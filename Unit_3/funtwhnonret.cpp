#include<iostream>
using namespace std;

void Add(int a,int b); // funtion declaration

int main()
{
    int input1, input2;
    cout<<"Enter for add the Numbers"<<endl;
    cin>>input1>>input2;

    Add(input1, input2); // funtion call

    return 0;
}

void Add(int a, int b){ // funtion defination
    cout<<"Sum is "<<a+b;
}
