#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,0,1,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if (arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        else{
            continue;} 
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}