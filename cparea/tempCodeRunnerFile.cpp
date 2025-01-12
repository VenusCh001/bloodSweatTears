#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
        vector<int>arr;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            count+=arr[i]==0?1:0;
        }
        if(count==n)return 0;
        else if(count==0)return 1;
        else return 2;
    }
return 0;
}

