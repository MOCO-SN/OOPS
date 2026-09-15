#include <iostream>
using namespace std;

void errorShow(int errorCode)
{
    switch (errorCode)
    {
    case 404:
        cout << "Errro Code 404"<<endl;
        break;
    case 403:
        cout << "Errro Code 404"<<endl;
        break;
    case 402:
        cout << "Errro Code 404"<<endl;
        break;
    case 401:
        cout << "Errro Code 404"<<endl;
        break;
    default:
        break;
    }
}

void SucessShow(int SucessCode){
    switch (SucessCode)
      {
    case 404:
        cout << "Sucess"<<endl;
        break;
    case 403:
        cout << "Errro Code 404"<<endl;
        break;
    case 402:
        cout << "Errro Code 404"<<endl;
        break;
    case 401:
        cout << "Errro Code 404"<<endl;
        break;
    default:
        break;
    }
}

class all_gates
{

public:
    // standard operator and glabal operator

    int Inverse(int i)
    {
        if (i == 0)
        {
            SucessShow(404);
            return 1;
        }
        else if(i == 1) 
        {
            SucessShow(404);
            return 0;
        }
        else{
            errorShow(404);
        }
    }

    int And(int i1, int i2)
    {
        if(i1 == 0 && i2 == 0)
        {
            SucessShow(404);
            return 0;
        }
        else if(i1 == 0 && i2 == 1)
        {
            SucessShow(404);
            return 0;
        }
        else if (i1 == 1 && i2 == 0)
        {
            SucessShow(404);
            return 0;
        }
        else if (i1 == 1 && i2 == 1)
        {
            SucessShow(404);
            return 1;
        }
        else{
            errorShow(404);
        }
    }

    int Or(int i1, int i2)
    {
        if(i1 == 0 && i2 == 0)
        {
            SucessShow(404);
            return 0;
        }
        else if(i1 == 0 && i2 == 1)
        {
            SucessShow(404);
            return 1;
        }
        else if (i1 == 1 && i2 == 0)
        {
            SucessShow(404);
            return 1;
        }
        else if (i1 == 1 && i2 == 1)
        {
            SucessShow(404);
            return 1;
        }
        else{
            errorShow(404);
        }
    }
};

int main()
{
    all_gates a1;

    cout<< "/---------------------------/"<<endl;
    cout<< "/-------INVERSE GATE--------/"<<endl;
    cout<< "/---------------------------/"<<endl;
  
    cout << a1.Inverse(0) <<endl;
    cout << a1.Inverse(1) <<endl;

    cout << "/--------------------------/"<<endl;
    cout << "/-------AND GATE-----------/"<<endl;
    cout << "/--------------------------/"<<endl;

    cout<<a1.And(0,0)<<endl;
    cout<<a1.And(0,1)<<endl;
    cout<<a1.And(1,0)<<endl;
    cout<<a1.And(1,1)<<endl;

    cout << "/--------------------------/"<<endl;
    cout << "/--------OR GATE-----------/"<<endl;
    cout << "/--------------------------/"<<endl;

    cout<<a1.Or(0,0)<<endl;
    cout<<a1.Or(0,1)<<endl;
    cout<<a1.Or(1,0)<<endl;
    cout<<a1.Or(1,1)<<endl;

}