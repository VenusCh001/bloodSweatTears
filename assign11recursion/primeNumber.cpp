//- Given a number n, check whether it's a prime number or not using recursion.
#include<iostream>
using namespace std;
void prime(int num,int i){
    if(i>num/2){
        return;
    }
    if(num%i==0){
        cout<<"prime";return;
    }
    prime(num,i+1);
}
int main(){
    int num;cout<<"enter number : ";cin>>num;
    prime(num,2);
    return 0;
}
