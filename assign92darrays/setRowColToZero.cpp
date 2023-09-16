//Q3 - Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and
//column of that element to 0. Make the changes inplace and print the matrix.
#include<iostream>
using namespace std;
int main(){
int r,c;
cout<<"enter rows  :"<<endl;
cin>>r;
cout<<"enter columns  :"<<endl;
cin>>c;
int matrix[r][c];

cout<<"enter elements  :"<<endl;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
cout<<endl;
cout<<" matrix is :"<<endl;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j]==0){
                cout<<i<<" "<<j<<" :"<<matrix[i][j]<<endl;
                for(int k=0;k<c;k++){
                    matrix[i][k]=0;
                }
                for(int k=0;k<r;k++){
                    matrix[k][j]=0;
                }
                break;
            }
            else{
                continue;
            }
        }
    }

cout<<endl;
cout<<"new matrix is :"<<endl;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}


