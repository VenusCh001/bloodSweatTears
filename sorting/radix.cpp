#include<iostream>
#include<vector>
using namespace std;
void radixsort(int *arr,int n,int pos){
    int i;
    vector<int>freq(10,0);
    for(i=0;i<n;i++){
        freq[(arr[i]/pos)%10]++;
    }
    for(i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
    int ans[n];
    for(i=n-1;i>=0;i--){
        ans[--freq[(arr[i]/pos)%10]]=arr[i];    
    }
    for(i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
int main(){
    int arr[]={170,45,75,90,802,2};
    int max_ele=arr[0];
    for(int i=0;i<6;i++){
        max_ele=max(max_ele,arr[i]);
    }
    for(int pos=1;max_ele/pos>0;pos*=10){
        radixsort(arr,6,pos);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}