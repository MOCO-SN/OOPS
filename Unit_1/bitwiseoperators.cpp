#include<iostream>

using namespace std;

int main(){

    int a,b,c,d,e,f,g;

    // bitwise operators

    a = 5;
    b = 3;

    // example of & (bitwise and)
    
    c = a&b;
    cout<<"example of & (bitwise and)"<<c<<endl;

    // example of | (bitwise or)

    d = a|b;
    cout<<"example of | (bitwise or)"<<d<<endl;

    // example of ^ (bitwise xor)

    e = a^b;

    cout<<"example of ^ (bitwise xor)"<<e<<endl;

    // example of ~ (bitwise not)

    cout<<"example of ~ (bitwise not)"<<~a<<endl;
    cout<<"example of ~ (bitwise not)"<<~b<<endl;

    // << left shift

    f = a<<b;
    cout<<"example of << left shift"<<f<<endl;
    
    // >> right shift

    g = a>>b;
    cout<<"example of >> right shift"<<g<<endl;

    return 0; 
}