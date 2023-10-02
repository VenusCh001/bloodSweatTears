//Given a 2D matrix with m rows and n columns containing integers. Print and return the row
//number with maximum sum in the array.

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> prefixSum(int m,int n,vector<vector<int>> arr){
    
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<arr[0].size();j++){
            arr[i][j]+=arr[i][j-1];
        }
    }
    return arr;
}
int main(){
    int m,n;
    cout<<"enter number of rows : ";cin>>m;
    cout<<"enter number of columns : ";cin>>n;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    arr=prefixSum(m,n,arr);
    int max=INT_MIN;int maxIndex;
    for(int i=0;i<arr.size();i++){
        if(arr[i][n-1]>=max){
            max=arr[i][n-1];
            maxIndex=i;
        }
    }    
    cout<<"row number for max sum of row is "<<maxIndex+1;
    return 0;
}