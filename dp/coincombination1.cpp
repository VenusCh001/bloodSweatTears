#include<bits/stdc++.h>
using namespace std;
int ans=0;
void coincomb(vector<int>arr,int x,int currsum){
    if(currsum==x){
        ans++;return;
    }
    if(currsum>x)return;
    for(int j=0;j<arr.size();j++){
        coincomb(arr,x,currsum+arr[j]);
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int currsum=0;
    coincomb(arr,k,currsum);
    cout<<ans<<endl;
    return 0;
}