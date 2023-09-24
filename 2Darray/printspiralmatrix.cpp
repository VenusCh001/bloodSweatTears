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
    int top=0;int bottom=row-1;int left=0;int right=col-1;int direction=0;
    while((left<=right) && (top<=bottom)){
        if (direction==0){
            for(int j=left;j<=right;j++){
            cout<<matrix[top][j]<<" ";
        }top++;
        }
        else if(direction==1){
            for(int j=top;j<=bottom;j++){
            cout<<matrix[j][right]<<" ";
        }right--;
        }
        else if(direction==2){
            for(int j=right;j>=left;j--){
            cout<<matrix[bottom][j]<<" ";
        }bottom--;
        }
        else{
            for(int j=bottom;j>=top;j--){
            cout<<matrix[j][left]<<" ";
        }left++;
        }

        direction=(direction+1)%4;
        
    }
    return 0;
}
