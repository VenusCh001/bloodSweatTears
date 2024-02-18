#include<iostream>
using namespace std;
void merge(int arr[],int first,int mid,int last){
    int an=mid-first+1;
    int bn=last-mid;
    int a[an],b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[first+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0;int j=0;int k=first;
    while(i<an and j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
    
}
void mergesort(int arr[],int first,int last){
    if(first>=last){
        return;
    }
    int mid=(first+last)/2;
    mergesort(arr,first,mid);
    mergesort(arr,mid+1,last);
    merge(arr,first,mid,last);
}
int main(){
    int arr[]={10,6,8,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}