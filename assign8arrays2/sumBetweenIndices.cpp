#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int l,r;int sum=0;
    cout<<"enter lower index ";cin>>l;
    cout<<"enter upper index ";cin>>r;
    for(int i=l;i<=r;i++){
        sum+=arr[i];
    }
    cout<<sum;

}
