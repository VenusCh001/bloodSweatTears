#include<iostream>
using namespace std;

void print_combination(int *arr,int r,int *data){
for(int j=0;j<r;j++){
    cout<<data[j]<<" ";
}cout<<endl;
}
void recur(int *arr,int i,int n,int r,int*data,int index){
    if(index==r){
        print_combination(arr,r,data);return;
    }
    if(i==n) return;
    data[index]=arr[i];
    recur(arr,i+1,n,r,data,index+1);
    recur(arr,i+1,n,r,data,index);
}

int main(){
    int arr[]={1,2,3,4};
    int data[3];
    recur(arr,0,4,2,data,0);
}