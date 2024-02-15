#include<iostream>
#include<vector>
using namespace std;
void countsort(int *arr,int n){
    int max_ele=arr[0];
    int i;
    for(i=0;i<n;i++){
        max_ele=max(max_ele+1,arr[i]);
    }
    vector<int>freq(max_ele,0);
    for(i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(i=1;i<=max_ele;i++){
        freq[i+1]+=freq[i];
    }
    int ans[n];
    for(i=n-1;i>=0;i--){
        ans[--freq[arr[i]]]=arr[i];    
    }
    for(i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
int main(){
    int arr[]={1,5,5,3,3,2};
    countsort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}