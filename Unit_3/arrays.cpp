#include<iostream>
using namespace std;
int main(){

    cout<<"Single Plane Arrays"<<endl;

    // single plane 
    int a[100];

    a[0] = 100;
    
    cout<<a[0]<<endl;

    cout<<"Array2D"<<endl;

    // 2D Array
    int arr2D[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    cout<<arr2D[0][0]<<endl;
    cout<<arr2D[0][1]<<endl;
    cout<<arr2D[0][2]<<endl;
    cout<<arr2D[1][0]<<endl;
    cout<<arr2D[1][1]<<endl;
    cout<<arr2D[1][2]<<endl;


    cout<<"MultiDimentailArray"<<endl;
    int MultiDimentailArray[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout<<MultiDimentailArray[0][0]<<endl;
    cout<<MultiDimentailArray[0][1]<<endl;
    cout<<MultiDimentailArray[0][2]<<endl;
    cout<<MultiDimentailArray[1][0]<<endl;
    cout<<MultiDimentailArray[1][1]<<endl;
    cout<<MultiDimentailArray[1][2]<<endl;
    cout<<MultiDimentailArray[2][0]<<endl;
    cout<<MultiDimentailArray[2][1]<<endl;
    cout<<MultiDimentailArray[2][2]<<endl;

}