#include<iostream>

using namespace std;

int main(){


    // reltional operators

    int a,b,c,d,e,f,g,h,i,z;

    // example of equal to == (a = 10)

    a = 10;
    z =20;

    if(a==z) cout<<"example of equal to == (a and z are not equal)"<<endl;

    // example of add and assign to += (b = b+a)

    if(a>=z) cout<<"example of greater than equal to == (a and z are not equal)"<<endl;

    // example of sub and assign to -= (c = c-a)

    c -= a;

    cout<<"example of sub and assign to -="<<c<<endl;

    // example of multiple and assign to *= (d = d*a)

    d *=a;

    cout<<"example of multiple and assign to *="<<d<<endl;
 
    // example of divide and assign to /=  (e = e/a)

    e /=a;
    cout<<"example of divide and assign to /="<<e<<endl;

    // example of modulus and assign to %=  (f = f%a)

    f %=a;
    cout<<"example of modulus and assign to %="<<f<<endl;

    // example of AND and assign to &= (g = g&a)

    g &=a;

    cout<<"example of AND and assign to &="<<g<<endl;

    h ^= a;
    // example of xor and assign to ^= (h = h^a)

    cout<<"example of xor and assign to ^="<<h<<endl;

    // example of left shift to <<= (i = i<<a)
    
    i <<=a;
    cout<<"example of left shift to <<="<<i<<endl;


    
}