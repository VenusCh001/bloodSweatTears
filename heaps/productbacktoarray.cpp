#include <bits/stdc++.h>

using namespace std;

int maxval(vector<int>arr,int n,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(auto ele:arr)pq.push(ele);//k=2
    for(int i=0;i<k and pq.size()>1;i++){
        int val1=pq.top();//4
        pq.pop();
        int val2=pq.top();//5
        pq.pop();

        pq.push(val1*val2);// 20 6
    }
    while(pq.size()>=2)pq.pop();
    return pq.top();
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"the ans is : "<<maxval(arr,n,k);
    return 0;
}