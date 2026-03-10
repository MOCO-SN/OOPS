#include<iostream>
#include<string>
using namespace std;

// it is process of the drive class from another drive class [like example chain].

// Explaination so here see from bmw class connected with m5 which is the one model of cars from bmw 
// and another class which is M5development which is connect with m5 car for the development updates.

class Bmw{
    public:

    string Company;

};

class M5 : public Bmw{
    public:

    string Name;
    string TopSpeed;
    string ModelName;
    string ModelNumb;
    
    void viewM5(M5 m){
        cout<<m.Company<<endl;
        cout<<m.Name<<endl;
        cout<<m.TopSpeed<<endl;
        cout<<m.ModelName<<endl;
        cout<<m.ModelNumb<<endl;
    }
};

class M5Development : public M5{
    public:

    string Name;
    string TopSpeed;
    string ModelName;
    string ModelNumb;

    void viewM5Updated(M5Development m){
        cout<<m.Company<<endl;
        cout<<m.Name<<endl;
        cout<<m.TopSpeed<<endl;
        cout<<m.ModelName<<endl;
        cout<<m.ModelNumb<<endl;
    }
};
int main(){

    M5 m1;

    m1.Company = "BMW";
    m1.ModelName = "M5";
    m1.ModelNumb = "M5_MOCO";
    m1.Name = "MOCO";
    m1.TopSpeed ="350km/h";

    cout<<"Normal M5"<<endl;
    m1.viewM5(m1);

    M5Development m2;

    m2.Company = "BMW";
    m2.ModelName = "M5";
    m2.ModelNumb = "M5_MOCO";
    m2.Name = "MOCO";
    m2.TopSpeed ="450km/h";
    cout<<endl<<endl<<"Updated M5"<<endl;

    m2.viewM5Updated(m2);

    return 0;
}