#include<iostream>
using namespace std;
int f(int n){
    if(n==0){
        return 0;
    }
    if(n%2==1){
        return (n+f(n-1));
    }
    else{
        return (f(n-1)-n);
    }
}
int main(){
    int n;cout<<"enter number : ";cin>>n;
    cout<<f(n);
    return 0;
}