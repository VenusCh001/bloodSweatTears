//Write a program to calculate the sum of digits of a 3 digit number.
#include<iostream>
using namespace std;
int main(){
    int num,first,second,last;
    int sum=0;
    cout<<"give three digit number"<<endl;
    cin>>num;
    first=num/100;
    second=(num%100)/10;
    last=(num%100)%10;
    sum=first+second+last;
    cout<<"sum is : "<<sum;
    return 0;
}