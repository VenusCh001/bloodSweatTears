#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter number :";
    cin>>n;
    for(int i =n; i>=1;i--){
        sum=sum+i;
    }
    cout<<"the sum : "<<sum;
    return 0;
}