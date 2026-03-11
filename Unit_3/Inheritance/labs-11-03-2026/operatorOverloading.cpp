#include <iostream>
#include <string>
using namespace std;
class Complex
{
    private:
    int real = 0, img = 0;

    public:
    Complex(int r,int i){
        real = r;
        img = i;
    }

    void View(){
        cout<<real<< "+"<<img<<"i";
    }

    void NewVar(){
        real
    }
};

int main()
{

    Complex c1(10,20);
    Complex C2(1,2);

    Complex C3 = c1+C2
 
    c1.View();
    return 0;
}