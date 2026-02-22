#include<iostream>

using namespace std;

int main(){


    // using if else;

    string user = "Enter Number for checking Week Days.";
    int inputDate;

    cout<<user<<endl;
    cin>>inputDate;

     switch (inputDate)
    {
    case 1:
        cout<<inputDate<< " is Sunday."<<endl;
        break;
    case 2:
        cout<<inputDate<< " is Monday."<<endl;
        break;
    case 3:
        cout<<inputDate<< " is Tuesday."<<endl;
        break;
    case 4:
        cout<<inputDate<< " is Wednesday."<<endl;
        break;
    case 5:
        cout<<inputDate<< " is Thrusday."<<endl;
        break;
    case 6:
        cout<<inputDate<< " is Friday."<<endl;
        break;
    case 7:
        cout<<inputDate<< " is Saturday."<<endl;
        break;

    default:
        cout<<inputDate<< " is invaid option."<<endl;
        break;
    }

}