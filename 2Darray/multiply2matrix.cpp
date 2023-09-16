#include<iostream>
using namespace std;
int main(){
int r1,r2,c1,c2;
cin>>r1>>c1>>r2>>c2;
if(r2!=c1){
    cout<<"not possible";
}
int matrix1[r1][c1], matrix2[r2][c2],matrix3[c1][r2];

cout<<"enter elements for 1 :"<<endl;
for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>matrix1[i][j];
        }
    }
cout<<"enter elements for 2 :"<<endl;
for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>matrix2[i][j];
        }
    }

for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++){
                 value+=(matrix1[i][k]*matrix2[k][j]); 
                 cout<<value;       
            }
            matrix3[i][j]=value;
        }
    }

cout<<endl<<"matrix 1 is :"<<endl;
for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl<<"matrix 2 is :"<<endl;
for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl<<"multiplied matrix is :"<<endl;
for(int i=0;i<c1;i++){
        for(int j=0;j<r2;j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}


