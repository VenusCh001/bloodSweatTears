#include<iostream>
using namespace std;
int partition(int arr[],int first,int last){
    int ele=arr[last];
    int i=first-1;
    int j=first;
    while(j<last){
        if(arr[j]<ele){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}
void quicksort(int arr[],int first,int last){
    if(first>=last) return;
    int pi=partition(arr,first,last);
    quicksort(arr,first,pi-1);
    quicksort(arr,pi+1,last);
}
int main(){
    int arr[]={3,8,5,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}