//You are given an m x n integer matrix grid. Here m>=3 and n>=3
//We define an hourglass as a part of the matrix with the following shape:

#include<iostream>
#include<vector>
using namespace std;
int hourglass(int m,int n,vector<vector<int>> arr){
    int ans=INT_MIN;
    for(int i=0;i<m-2;i++){
        for(int k=0;k<n-2;k++){
            int sum=0;
            for(int j=k;j<k+3;j++){
                sum+=arr[i][j]+arr[i+2][j];
            }
            sum+=arr[i+1][k+1];
            cout<<"sum "<<sum<<" ans "<<ans<<endl;
            if(sum>=ans){
                ans=sum;
            }
            
            

        }
    }
    return ans;
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
    cout<<hourglass(m,n,arr);
    
    return 0;
}