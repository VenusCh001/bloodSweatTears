#include<iostream>
using namespace std;
int maxEle(int *arr,int idx,int n){
    if(idx==n-1 ){
        return arr[idx];
    }
    
   
    return max(arr[idx],maxEle(arr,idx+1,n));
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<maxEle(arr,0,5);
    return 0;
}
