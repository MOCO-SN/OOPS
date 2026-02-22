#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number";
    cin >> input;
    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }
    
}