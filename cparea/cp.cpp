#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
        cin>>n>>m;
        vector<vector<int>>arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        sort(arr.begin(),arr.end(),[](const vector<int>a,vector<int>b){
            int prevsuma=0;
            int prevsumb=0;
            int suma=0;
            int sumb=0;
            for(int i=0;i<a.size();i++){
                suma+=a[i]+prevsuma;
                prevsuma=suma;
            }
            for(int i=0;i<b.size();i++){
                sumb+=b[i]+prevsumb;
                prevsumb=sumb;
            }
            if (suma != sumb) return suma > sumb; // Sort by cumulative sum in descending order
            return a > b; 
        });
        vector<int>arrr(m*n);
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arrr[k]=arr[i][j];
                k++;
            }
        }
        int prevsuma=0;
            int suma=0;
            for(int i=0;i<arrr.size();i++){
                suma+=arrr[i]+prevsuma;
                prevsuma=suma;
            }
            cout<<suma<<endl;

	}
return 0;
}