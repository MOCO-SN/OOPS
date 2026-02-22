#include<iostream>
using namespace std;
int Fact(int a);

int main()
{
    int in1;
    cout<<"Enter Numbers for find Factorial"<<endl;
    cin>>in1;
    cout <<Fact(in1);
    return 0;
}

int Fact(int a){
    if(a == 1){
        return 1;
    }
    else
    {
        return a * Fact(a-1);
    }
    return 0;
}