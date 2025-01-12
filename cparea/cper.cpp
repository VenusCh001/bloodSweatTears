#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
        vector<int>arr(n);
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            count+=arr[i]==0?1:0;
        }
        if(count==n)cout<<0<<endl;
        else if(count==0)cout<<1<<endl;
        else if(count==1 and arr[0]==0 and arr[n-1]!=0){
            cout<<1<<endl;
            }
        else if(count==1 and arr[0]!=0 and arr[n-1]==0){
                cout<<1<<endl;
            }
        else if(count==2 and (arr[0]==0 and arr[n-1]==0)){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
return 0;
}

