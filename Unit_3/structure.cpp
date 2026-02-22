#include<iostream>
using namespace std;
int main(){

    // Declearation of Structures
    // struct with key word
    struct Config1{
        bool aimbot =false;
        bool espLine = true;
    };

    // call back of struct for data fetch
    Config1 Vars;

    if (Vars.aimbot) // check 
    {
        cout<<"Aimbot is "<<Vars.aimbot<<endl;
    }
    else 
        cout<<"Aimbot is "<<Vars.aimbot<<endl;
    
    if (Vars.espLine)
    {
        cout<<"ESPLINE is "<<Vars.espLine<<endl;
    }
    else 
        cout<<"ESPLINE is "<<Vars.espLine<<endl;


        struct Students
        {
            string name;
            float marks;
            int Rollnumb;
        };

        Students s1 = {"Sachin",100.0,1};

        cout<<s1.name<<endl;
        cout<<s1.marks<<endl;
        cout<<s1.Rollnumb<<endl;

        
}