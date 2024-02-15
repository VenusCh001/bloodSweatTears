#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketsort(float *arr,int n){
    vector<vector<float>>bucket(n);
    for(int i=0;i<n;i++){
        int index=arr[i]*n;
        bucket[index].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]=bucket[i][j];
        }
    }
}
int main(){
    float arr[]={0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};
    int n=sizeof(arr)/sizeof(arr[0]);
    bucketsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
