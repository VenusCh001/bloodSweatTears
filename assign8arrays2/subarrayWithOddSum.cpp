//​Given an integer array arr, return the number of consecutive sequences(subarrays) with
//odd sum.

#include<iostream>
using namespace std;
int main(){
    int arr[]={0,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;int sum;

    for(int i=0;i<size;i++){
        sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            if(sum%2==1){
                count++;
            }
        }
    }

    cout<<endl<<count;
return 0;

}      
    
