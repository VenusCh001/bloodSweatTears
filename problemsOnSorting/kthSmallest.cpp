#include<iostream>
using namespace std;
int partition(int arr[],int first,int last){
    int ele=arr[last];
    int i=first-1;
    int j=first;
    while(j<last){
        if(arr[j]<ele){
            i++;swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}
int quicksort(int arr[],int first,int last,int k){
    int pi=partition(arr,first,last);
    if(k-1==pi) return arr[pi];
    else if(k-1<pi){
        quicksort(arr,first,pi-1,k);
    }
    else{
        quicksort(arr,pi+1,last,k);
    }
}
int main(){
    int arr[]={3,5,2,1,40,70,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    cout<<quicksort(arr,0,n-1,k);
    return 0;
}