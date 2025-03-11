#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m,x;
        cin>>n>>m;
        vector<int>arr(n);
        cin>>x;
        for(int i=0;i<n;i++)cin>>arr[i];
        
        int prev=INT_MIN;
        int curr=0;
        int next=0;
        if(n==1){
            cout<<"YES"<<endl;continue;
        }
        for(int i=0;i<n-1;i++){
            curr=arr[i];//8
            next=arr[i+1];//7
            if(curr<=next){
                prev=curr;
                continue;
            }//arr -1 0 7
            if(x-curr>=prev and x-curr<=next){
                arr[i]=x-curr;
                prev=x-curr;
            }
            else prev=curr;// 0
        }
        if(arr[n-2]>arr[n-1]){
            arr[n-1]=x-arr[n-1];
        }
        for(auto ele:arr)cout<<ele<<" ";
        cout<<endl;
        vector<int>copyarr=arr;
        sort(copyarr.begin(),copyarr.end());
        if(copyarr==arr)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
return 0;
}