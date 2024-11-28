#include<iostream>
#include<vector>
using namespace std;

int add(vector<int>arr,int index,int n){
    if(index==n){
        return 0;
    }
    return arr[index]+add(arr,index+1,n);
}
int main(){

int n;cin>>n;
  vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<add(arr,0,n);

    

    return 0;
}