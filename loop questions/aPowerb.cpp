#include<iostream>
using namespace std;
int main(){
    int a,b,val=1;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    for(int i=1;i<=b;i++){
        val=val*a;
    }
    cout<<"result : "<<val;
    return 0;
}