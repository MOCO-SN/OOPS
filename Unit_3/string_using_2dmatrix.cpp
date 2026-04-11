#include<iostream>
using namespace std;

int main(){
    int row, col, i,j;

    cout<< "Enter First Matrix Rows and it's Columns"<<endl;

    cin>> row>>col;

    int A[row][col], B[row][col], C[row][col];

    cout<< "Enter First Matrix"<<endl;

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){ 
            cin>>A[i][j];
        }
    }
    cout<< "Enter Second Matrix"<<endl;
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>B[i][j];
        }
    }

    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout<< "Added Matrix"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<< "Added Matrix then transpose of it's"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<C[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}