#include<iostream>
using namespace std;

void Add(int a,int b); // funtion declaration [in this funtion declarated a,b is arguments ] when it's declarated in the funtion is callled arguments

int main()
{
    int input1, input2;
    cout<<"Enter for add the Numbers"<<endl;
    cin>>input1>>input2;

    Add(input1, input2); // funtion call 
    
    return 0;
}

void Add(int a, int b){ // funtion defination [in this funtion declarated a, b is parameters ] when value is copy in this funtion is call parameter,
    cout<<"Sum is "<<a+b;
}
