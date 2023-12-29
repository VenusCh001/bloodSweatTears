#include<iostream>
using namespace std;
bool find_Target(int *arr,int n,int x){
    if(n==-1){
        return 0;
    } 
    return ( arr[n]==x) || find_Target(arr,n-1,x);

    
}
int main(){
    int n;cout<<"enter n : ";cin>>n;
    int arr[n];
    for(int index=0;index<n;index++){
		cin>>arr[index];
    }
    int x;cout<<"target number is : ";cin>>x;
cout<<find_Target(arr,n,x);
return 0;
}