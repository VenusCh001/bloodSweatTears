// calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;
int main(){
    int n1,n2,num;
    cout<<"enter 5 digit number :";
    cin>>num;
    n1=num/10000;
    n2=(num%100)/10;
    cout<<"n1 :"<<(n1)<<endl;
    cout<<"n2 is :"<<(n2)<<"\n";
    cout<<"sum is :"<<(n1+n2);
    return 0;

}