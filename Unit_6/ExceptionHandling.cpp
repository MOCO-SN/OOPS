#include <iostream>
using namespace std;

int main()
{

    // try - 
    // catch -
    // throw -

    int a = 20, b = 2;

    try
    {
        if (b == 0)
        {
            throw "Divison is not possible here";
            cout << "Result" << endl
                 << a / b << endl;
        }
    }

    catch (const char *msg)
    {
        cout << "error" << msg << endl;
    }
    cout << "program continued" << endl;
    
    return 0;
}