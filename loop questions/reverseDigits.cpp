#include<iostream>
using namespace std;
int main(){
    int num,revNum,lastdigit;
    cout<<" enter number : ";
    cin>>num;
    while(num>0){
        lastdigit=num%10;
        revNum=revNum*10+lastdigit;
        num=num/10;
    }
    cout<<"reversed number is : "<<revNum;
    
    return 0;
}