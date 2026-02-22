#include<iostream>
using namespace std;
int Fab(int a);
 int main(){
    int inp1;
    cout<<"Enter num for finding Fabonacci Series"<<endl;
    cin>>inp1;

    for(int i = 0; i<inp1;i++){
        cout<<Fab(i)<<" ";
    }

    return 0;
}

int Fab(int a){
    if(a == 0){
        return 0;
    }
    else if (a == 1){
        return 1;
    }
    else {
        return Fab(a -1) + Fab(a -2);
    }
    return 0;
}