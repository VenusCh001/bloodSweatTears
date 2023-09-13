//Given an integer array arr, return an array ans such that 
//ans[i] is equal to the product of all the elements of arr except arr[i].
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int ans[]={1,1,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i!=j){
                ans[i]*=arr[j];
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
  return 0;}      
    
