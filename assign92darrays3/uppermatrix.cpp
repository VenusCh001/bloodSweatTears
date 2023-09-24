#include<iostream>
#include<vector>
using namespace std;

void upper(int n){
    vector<vector<int>> arr(n,vector<int>(n));
    cout<<"enter elements now : ";
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=n-1;j>=i;j--){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter n: "; cin>>n;
    upper(n);
   
    return 0;
}
