#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter rows : "; cin>>row;
    cout<<"enter columns : "; cin>>col;
    cout<<"enter elements now :-";
    int matrix[row][col];
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    int top=0;int bottom=col-1;int left=0;int right=row-1;
    while(left<=right && top<=bottom){
        for(int j=left;j<=right;j++){
            cout<<matrix[top][j]<<" ";
        }top++;

        for(int j=top;j<=bottom;j++){
            cout<<matrix[j][right]<<" ";
        }right--;

        for(int j=right;j<=left;j--){
            cout<<matrix[bottom][j]<<" ";
        }bottom--;

        for(int j=bottom;j<=top;j--){
            cout<<matrix[j][left]<<" ";
        }left++;

    }
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}