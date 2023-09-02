#include<iostream>
using namespace std;
int main(){
    int num,count,sum;
    count=0,sum=0;
    cout<<" enter number : ";
    cin>>num;
    while(num>0){
        sum=sum+ num%10;
        num=num/10;

    }
    cout<<"total digits sum : "<<sum;
    return 0;
}