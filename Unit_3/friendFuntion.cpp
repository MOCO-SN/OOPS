#include<iostream>
#include<string>

using namespace std;

// single side Friendship

// The friend funtion have rights to access non-members funtion and has ability to access the private data of the class

class X{
    private:
    int a = 20;

    friend class Y; 
};

class Y{
    public:
    void dataView(X obj){
        cout<<obj.a<<endl;
    }
};

int main(){

    X x1;
    Y y1;
    y1.dataView(x1);
    return 0;
}


