#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n :"<<endl;
cin>>n;

int matrix[n][n];

cout<<"enter elements  :"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
cout<<"matrix original  :"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i>=j){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
        else{
            continue;
            }
    }
}
int j,k;
for(int i=0;i<n;i++){
    for( j=0,k=n-1;j<k;j++,k--){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[i][k];
        matrix[i][k]=temp;
    }
}


cout<<"rotated matrix :"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
         cout<<endl;
    }
return 0;
}


