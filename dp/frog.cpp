#include <bits/stdc++.h>
using namespace std;
int f(vector<int>arr,int n,int i,int cost){
    if(i==n-1){
        return cost;
    }
    return min(f(arr,n,i+1,cost+abs(arr[i]-arr[i+1])),(i<n-2)?(f(arr,n,i+2,cost+abs(arr[i]-arr[i+2]))):INT_MAX);
}
int main() {
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<f(arr,n,0,0);
    return 0;
}