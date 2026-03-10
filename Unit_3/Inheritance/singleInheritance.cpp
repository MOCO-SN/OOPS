#include<iostream>
#include<string>
using namespace std;

// when  one class can inheritace or add and modify, add single property to it's known as single inheritance.

class Fan{

    public:
    string ModelName;
};

class Speed : public Fan{
    public:
    int FanSpeed;

    void viewFan(Speed f){
        cout<<f.ModelName<<endl;
        cout<<f.FanSpeed<<endl;
    }
};

int main(){

    Speed f1;

    f1.ModelName = "TUFAN F120";
    f1.FanSpeed = 120;

    f1.viewFan(f1);

    return 0;
}