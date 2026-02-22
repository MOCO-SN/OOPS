#include<iostream>

using namespace std;

int main(){



    // logical operators

    cout<<"AND Operators"<<endl;

    int a = 10, b = 20;
    
    if(a ==10 && b ==20){

        cout<< "corrected"<<endl;
    }
    else cout<<"not corrected"<<endl;


    cout<<"OR Operators"<<endl;

    if(a ==10 || b ==20){

        cout<< "corrected"<<endl;
    }
    else cout<<"not corrected"<<endl;


    cout<<"NOT Operators"<<endl;    

    static bool logined = true;

    if(logined){

        cout<<"login is succesed"<<endl;
    }
    if(!logined){

        cout<<"login is not succesed"<<endl;
    }
}