#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int a=mid-low+1;
    int b=high-mid;
    int firstpart[a];
    int secondpart[b];
// 3 5 7 9
// 1 2 3 mid=
int i,j;
    for(i=0;i<a;i++){
        firstpart[i]=arr[low+i];
    }
    for(j=0;j<b;j++){
        secondpart[j]=arr[mid+1+j];
    }

    i=0;j=0;
    int k=low;
  
    while(i<a and j<b){
        if(firstpart[i]>secondpart[j]){
            arr[k]=secondpart[j];
            j++;
        }
        else{
            arr[k]=firstpart[i];
            i++;
        }
        k++;
    }
    while(i<a){
        arr[k]=firstpart[i];
        i++;k++;
    }
    while(j<b){
        arr[k]=secondpart[j];
        j++;k++;
    }
}
void divide(int arr[],int low,int high){
    if(low>=high)return;
    int mid=(low+high)/2;
    divide(arr,low,mid);
    divide(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int arr[]={7,10,3,2,8,1};
    int high=sizeof(arr)/sizeof(arr[0])-1;
    divide(arr,0,high);
    for(auto ele:arr){
        cout<<ele<<" ";
    }

    return 0;
}