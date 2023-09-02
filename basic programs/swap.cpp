#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cout<<"initial value of a: "<<a<<endl;
    cout<<"initial value of b: "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"final value of a: "<<a<<endl;
    cout<<"final value of b: "<<b<<endl;
    return 0;
    
}