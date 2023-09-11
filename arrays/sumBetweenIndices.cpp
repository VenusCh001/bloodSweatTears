#include<iostream>
using namespace std;
int main(){
    int arr[]={0,2,2,1,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    
    for(int i=0;i<size-1;i++){
        arr[i+1]+=arr[i];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<arr
    }
    
    
    return 0;
}
