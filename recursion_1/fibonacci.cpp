#include<iostream>
using namespace std;
int fibonacci(int n){
    //base case
    if(n==1 || n==0) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n=5;
    int result=fibonacci(n);
    cout<<result;
    return 0;
}
