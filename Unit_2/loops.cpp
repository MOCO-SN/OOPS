#include<iostream>
using namespace std;
int main(){


    int input, i,j =1,k;
    cin>> input;


    // with for loop

    for (i =1; i<=input;i++){
        
        cout<<i<<" Numbers with for Loop"<<endl;

    }

    // with while loop

    while (j<=input)
    {
        cout<<j<<" Numbers with while loop"<<endl;
        j++;
    }
    
    // with do while loop

    k=1;
    do{
        cout<<k<<" Numbers with do while loop"<<endl;
        k++;
    } while (k<=input);


}