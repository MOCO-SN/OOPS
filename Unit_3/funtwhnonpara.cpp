#include<iostream>
using namespace std;

void Add(); // funtion declaration

int main()
{
    
    Add(); // funtion call
    
    return 0;
}

void Add(){ // funtion defination

    int input1, input2;
    cout<<"Enter for add the Numbers"<<endl;
    cin>>input1>>input2;

    cout<<"Sum is "<<input1+input2;
}
