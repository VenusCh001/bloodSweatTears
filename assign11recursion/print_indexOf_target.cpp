#include<iostream>
using namespace std;
void f(int *arr,int idx,int n,int target){
    if(idx==n){
        return;
    }
    if(arr[idx]==target)  cout<<idx<<" ";
    f(arr,idx+1,n,target);
}
int main(){
    int arr[]={1, 2, 9, 2, 2, 9};
    f(arr,0,6,2);
    return 0;
}