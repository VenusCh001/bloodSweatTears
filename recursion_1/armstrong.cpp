#include<iostream>
#include<math.h>
using namespace std;
int armstrong(int num,int n){
    if(num<10) return num;
    return pow(num%10,n) + armstrong(num/10,n);
}
int main(){
    int num,n;
    cout<<"enter number : ";cin>>num;
    cout<<"enter length : ";cin>>n;    
    int sum=armstrong(num,n);
    cout<<endl<<sum;
    return 0;
}