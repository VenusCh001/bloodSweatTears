#include<iostream>
using namespace std;

void sum_triangle(int *arr,int size,int idx){
if(idx==size){
    return;
}
for(int i=0;i<size-idx;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
int level[size-idx];
for(int i=0;i<=size-idx;i++){
    int sum=arr[i]+arr[i+1];
    level[i]=sum;
}
sum_triangle(level,size,idx+1);
}
int main(){
    int arr[]={5,4,3,2,1};
    sum_triangle(arr,5,0);
    return 0;
}