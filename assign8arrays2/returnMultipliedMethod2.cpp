//Given an integer array arr, return an array ans such that 
//ans[i] is equal to the product of all the elements of arr except arr[i].
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,2,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int left[size],right[size];

    left[0]=1;
    for(int i=1;i<size;i++){
        left[i]=left[i-1]*arr[i-1];
    }

    right[size-1]=1;
    for(int i=size-2;i>=0;i--){
        right[i]=right[i+1]*arr[i+1];
    }

    for(int i=0;i<size;i++){
        cout<<left[i]*right[i]<<" ";
    }
    

  return 0;}      
    
