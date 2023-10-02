//Q2 - Given a matrix arr[][] of integers, print the prefix sum matrix for it.

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> prefixSum(int m,int n,vector<vector<int>> arr){
    //row prefix sum
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<arr[0].size();j++){
            arr[i][j]+=arr[i][j-1];
        }
    }
    //column prefix sum
    for(int i=0;i<arr[0].size();i++){
        for(int j=1;j<arr.size();j++){
            arr[j][i]+=arr[j-1][i];
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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}