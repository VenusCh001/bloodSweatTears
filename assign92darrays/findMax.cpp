#include<iostream>
using namespace std;
int main(){
int r1,c1;
cout<<"enter rows  :"<<endl;
cin>>r1;
cout<<"enter columns  :"<<endl;
cin>>c1;
int matrix1[r1][c1];

cout<<"enter elements  :"<<endl;
for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>matrix1[i][j];
        }
    }

int max=matrix1[0][0];
for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(max<matrix1[i][j]){
                max=matrix1[i][j];
            }
        }
    }

cout<<"max is : "<<max;
return 0;
}


