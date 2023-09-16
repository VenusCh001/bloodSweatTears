#include<iostream>
using namespace std;
int main(){
int r1,c1;
cin>>r1>>c1;

int matrix1[r1][c1], matrix2[c1][r1];

cout<<"enter elements  :"<<endl;
for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>matrix1[i][j];
        }
    }

for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            matrix2[i][j]=matrix1[j][i];
        }
    }

cout<<endl<<"matrix 1 is :"<<endl;
for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl<<"transpose :"<<endl;
for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}


