//​Given an integer array arr, return the number of consecutive sequences(subarrays) with
//odd sum.

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;

    for(int i=1;i<size;i++){
        arr[i]+=arr[i-1];
    }

    for(int i=size-1;i>=0;i--){
        if(arr[i]%2==1){
                count++;
            }
        for(int j=0;j<i;j++){
            if((arr[i]-arr[j])%2==1){
                count++;
            }
        }
    }

    cout<<endl<<count;
return 0;

}      
    
