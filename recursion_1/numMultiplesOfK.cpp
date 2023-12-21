#include<iostream>
using namespace std;
void f(int num,int k){
    if(k==0){
        return;
    }
    f(num,k-1);
    cout<<num*k<<" ";
}

int main(){
    int num,k;
    cout<<"enter num : ";cin>>num;
    cout<<"enter k : ";cin>>k;
    f(num,k);
    return 0;

}