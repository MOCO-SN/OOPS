#include<iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int img;
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }
  
    Complex operator+(Complex const &obj){
        Complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    void display(){
    cout<<real<<" + i"<<img<<endl;
}
};

int main(){

    Complex c(2,3);
    Complex c1(3,5);

    Complex c3 = c1+c;

    c3.display();
}