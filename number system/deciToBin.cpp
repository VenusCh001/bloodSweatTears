#include<iostream>
using namespace std;
int main(){
    int num,digit,sum,power;
    cin>>num;
    sum=0;
    power=1;
    while(num>0){
        digit=num%2;
        sum=sum+digit*power;
        num=num/2;
        power*=10;
        
    }
    cout<<sum;
    return 0;
}