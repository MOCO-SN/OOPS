#include<iostream>

using namespace std;

int main(){


    int input1, input2;

    string user = "Enter Number for checking Arthimetic Operation.";
    cout<<user <<endl;

    cin>> input1;
    cin>> input2;

    cout << "O/P of Addition" << input1 + input2 <<endl;

    cout << "O/P of Subtract" << input1 - input2 <<endl;

    cout << "O/P of Multiple" << input1 * input2 <<endl;

    cout << "O/P of Divide" << input1 / input2 <<endl;

    cout << "O/P of Modulus" << input1 % input2 <<endl;

}