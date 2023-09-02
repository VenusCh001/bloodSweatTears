#include<iostream>
using namespace std;
int main(){
    int num,lastdigit,value,sum;
    cin>>num;
    value=1;
    sum=0;
    while(num>0){
        lastdigit=num%10;
        sum=sum+lastdigit*value;
        num=num/10;
        value=value*2;
    }
    cout<<sum;
    return 0;
}