#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,0,1,1,1};
    int sum;
    for(int i=0;i<arr.size();i++){
        arr[i]==1?sum+=1:sum+=-1;
        if(sum==0){
            max=i;
        }
    }
}