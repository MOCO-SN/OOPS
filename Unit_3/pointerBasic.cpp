#include<iostream>
using namespace std;
int main(){

    int a= 10;
    int *ptr = &a;

    cout<<"Printing Value of a "<<a<<endl;
    cout<<"Printing Address of a "<<&a<<endl;
    cout<<"Address of Address of ptr "<<&ptr<<endl;
    cout<<"Printing of Stored value "<<*ptr<<endl;
    
    return 0;
}