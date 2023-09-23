#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,nfact,rfact,nrfact;
    cin>>n;
    vector<vector<int>> pascal(n);
    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);
        for(int j=0;j<=i;j++){
            nfact=rfact=nrfact=1;
            if(i==j || j==0){
                pascal[i][j]=1;
            }
            else{
                for(int k=i;k>=1;k--){
                    nfact*=k;
                }
                for(int k=j;k>=1;k--){
                    rfact*=k;
                }
                for(int k=i-j;k>=1;k--){
                    nrfact*=k;
                }
                int value=nfact/(rfact*nrfact);
                pascal[i][j]=value;
            }
        }
    }        
for(int i=0;i<pascal.size();i++){
    for(int l=n-1;l>i;l--){
            cout<<" ";
        }
    for(int j=0;j<pascal[i].size();j++){
        cout<<pascal[i][j]<<" ";
    }
    cout<<endl;
}
return 0;

}