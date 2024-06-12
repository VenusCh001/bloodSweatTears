#include<iostream>
using namespace std;
int findTarget(int *arr,int target,int n){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target){
            if(arr[lo]>=arr[mid])lo=mid+1;
            else hi=mid-1;
        }
        else{
            if(arr[lo]<=arr[mid])hi=mid-1;   
            else lo=mid+1; 

        }
    }
    return -1;
}
int main(){
    int arr[]={4,5,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findTarget(arr,4,n);
    return 0;
}


