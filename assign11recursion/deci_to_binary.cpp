#include<iostream>
using namespace std;
void f(int num){
    if(num==1){
        cout<<1;return;
    } 
    f(num/2);
    cout<<(num%2);
}
int main(){
    int num;
    cout<<"enter number : ";
    cin>>num;
    f(num);
    return 0;
}