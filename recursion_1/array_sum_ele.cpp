#include<iostream>
using namespace std;
int summation(int *arr,int idx,int n){
    if(idx==n-1 ){
        return arr[idx];
    }
    
   return arr[idx]+summation(arr,idx+1,n);
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<summation(arr,0,5);
    return 0;
}
