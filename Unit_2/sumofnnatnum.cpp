#include<iostream>

using namespace std;

int main(){


    // sum of n number;

    string user = "Enter Number for checking Sum of N Natural Number.";
    int inputNum, sum, n;

    cout<<user<<endl;
    cin>>inputNum;

    for(int i = 0; i<= inputNum; i++)
    {
        cout<<i<<endl;
        n = i;
    }

   // formula n(n+1)/2
    sum = n * (n + 1)/2;
    cout<<sum;

}