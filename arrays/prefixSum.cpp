#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"prefix sum array is"<<endl;
    for(int i=0;i<size-1;i++){
        arr[i+1]+=arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
