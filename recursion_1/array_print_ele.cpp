#include<iostream>
using namespace std;
void traverse(int *arr,int idx,int n){
    if(idx==n){
        return;
    }
    cout<<arr[idx]<<"\n";
    traverse(arr,idx+1,n);
}
int main(){
    int arr[]={1,2,3,4,5};
    traverse(arr,0,5);
    return 0;
}