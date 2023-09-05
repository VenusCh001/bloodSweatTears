#include<iostream>
using namespace std;
void odd(int x,int y){
    for(int i=x;i<=y;i++){
        if(i%2!=0){
        cout<<i<<" ";
    }
    }
    
    
}
int main(){
    int a,b;
    cout<<"enter nums : ";
    cin>>a>>b;
    odd(a,b);
    return 0;
}