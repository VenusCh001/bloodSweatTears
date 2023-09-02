#include<iostream>
using namespace std;
int main(){
    int num,fac=1;
    cout<<"enter number :";
    cin>>num;
    for(int i =num; i>=1;i--){
        fac=fac*i;
    }
    cout<<"the factorial of the number is : "<<fac;
    return 0;
}