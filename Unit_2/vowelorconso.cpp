#include<iostream>

using namespace std;

int main(){


    // using if else;

    string user = "Enter Character for checking vowel or not.";
    char inputChar;

    cout<<user<<endl;
    cin>>inputChar;

    if(inputChar == 'a' || inputChar == 'A' || inputChar == 'e' || inputChar == 'E' || inputChar == 'i' || inputChar == 'I' || inputChar == 'O' || inputChar == 'o' || inputChar == 'u' || inputChar == 'U'){
        cout<<inputChar<< " is Vowel."<<endl;
    }
    else{
        cout<<inputChar<<" is Consonent."<<endl;
    }


    // using switch case;

    switch (inputChar)
    {
    case 'a':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'A':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'e':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'E':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'i':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'I':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'O':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'o':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'u':
        cout<<inputChar<< " is Vowel."<<endl;
        break;
    case 'U':
        cout<<inputChar<< " is Vowel."<<endl;
        break;

    default:
        cout<<inputChar<< " is Consonent."<<endl;
        break;
    }
    
}