#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: "; cin>>n;
    int matrix[n][n];
    int top=0;int bottom=n-1;int left=0;int right=n-1;int direction=0;int value=1;
    while((left<=right) && (top<=bottom)){
        if (direction==0){
            for(int j=left;j<=right;j++){
            matrix[top][j]=value++;
        }top++;
        }
        else if(direction==1){
            for(int j=top;j<=bottom;j++){
            matrix[j][right]=value++;
        }right--;
        }
        else if(direction==2){
            for(int j=right;j>=left;j--){
            matrix[bottom][j]=value++;
        }bottom--;
        }
        else{
            for(int j=bottom;j>=top;j--){
            matrix[j][left]=value++;
        }left++;
        }

        direction=(direction+1)%4;
        
    }
 for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
       return 0;
}
