#include<iostream>
#include<vector>
using namespace std;
void sum_triangle(vector<int>&arr,int n,vector<vector<int>> &result,int j){
if(n==0){
    return;
}
result[0]=arr;
result[j].resize(n-1);
for(int i=0;i<=n-2;i++){
    int sum=arr[i]+arr[i+1];
    result[j].push_back(sum);
}
sum_triangle(result[j],n-1,result,j+1);
}
int main(){
    vector<vector<int>>result;
    vector<int> arr={5,4,3,2,1};
    sum_triangle(arr,5,result,1);
    for(int i=0;i<5;i++){
        for(int k=5;k<i;k++){
            cout<<result[i][k]<<" ";
        }cout<<endl;
    }
    return 0;
}





