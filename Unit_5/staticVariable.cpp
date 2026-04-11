#include<iostream>

using namespace std;

// it store privous data like ints.


void fun(){
    int x = 0;
    cout<< x<<endl;
    x++;
}
int main(){
    
    fun();  // out will be 0
    fun(); // out will be 1
    fun(); // out will be 2
}