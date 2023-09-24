//A square matrix is said to be an perfect Matrix if both of the following conditions hold:
//a) All the elements in the diagonals of the matrix are non-zero integers.
//b) All other elements except the diagonal elements are 0.
//Given a 2D integer array grid of size n x n representing a square matrix, return true if grid
//is a perfect matrix. Otherwise, return false using functions.
#include<iostream>
using namespace std;
int main(){
int n;cout<<"enter n : ";cin>>n;
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
bool flag=true;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((i==j || i+j==n-1)&&(arr[i][j]!=0)){
            flag*=1;continue;
        }
        if(((i+j)!=n-1)&&(arr[i][j]==0)){
            flag*=1;continue;
        }
        else{ flag=0;break;}
    }
}
cout<<flag;
return 0;
}


