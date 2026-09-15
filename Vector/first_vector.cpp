#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;


// defining colors

namespace Color {
    const char* RESET   = "\033[0m";
    const char* RED     = "\033[31m";
    const char* GREEN   = "\033[32m";
    const char* YELLOW  = "\033[33m";
    const char* BOLD    = "\033[1m";
}


class OneFromMany{

    public:
    float input1;
    void passValue(float input1){
        this->input1 = input1;
    }

    float Resultant(){
        vector<float> data1;

        return 0;
    }

};



int main(){


    cout<<Color::YELLOW;
    cout<<"/------------------------------------------/"<<endl;
    cout<<"/------------VECTOR FRIST------------------/"<<endl;
    cout<<"/------------------------------------------/"<<endl;
    cout<<Color::RESET;

    vector<int> data = {100, 102, 30, 40, 10, 10};
    
    auto it =  find(data.begin(), data.end() , 10);

    if (it != data.end())
    {
        int index = distance(data.begin(), it);
        cout<< index<<endl;
    }

    cout<< "0/P FRONT OR START " << data.front()<<endl;
    cout<< "0/P Back or Last " << data.back()<<endl;
    cout<< "0/P From the postion " << data.at(1)<<endl;
    cout<< "0/P again poston " << data.at(4)<<endl;
    
    return 0;
}