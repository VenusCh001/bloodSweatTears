#include<iostream>
using namespace std;
void sort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]==0 and arr[j+1]>0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={0,5,0,3,4,2};
    sort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}