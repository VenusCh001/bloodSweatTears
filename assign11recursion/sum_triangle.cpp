#include<iostream>
using namespace std;

void sum_triangle(int *arr,int n){
if(n==0){
    return;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

int level[n-1];
for(int i=0;i<=n-2;i++){
    int sum=arr[i]+arr[i+1];
    level[i]=sum;
}
sum_triangle(level,n-1);
}
int main(){
    int arr[]={5,4,3,2,1};
    sum_triangle(arr,5);
    return 0;
}