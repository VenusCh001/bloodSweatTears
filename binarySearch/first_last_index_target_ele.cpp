#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,3,5,11};
    int target=3;
    int begin=0;
    int end=sizeof(arr)/sizeof(arr[0]);
    int low,high=-1;
    while(begin<=end){
        int mid=begin+(end-begin)/2;
        if(arr[mid]==target){
            low=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            begin=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    begin=0;
    end=sizeof(arr)/sizeof(arr[0]);
    while(begin<=end){
        int mid=begin+(end-begin)/2;
        if(arr[mid]==target){
            high=mid;
            begin=mid+1;            
        }
        else if(arr[mid]<target){
            begin=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<low<<" "<<high;
    return 0;
}
