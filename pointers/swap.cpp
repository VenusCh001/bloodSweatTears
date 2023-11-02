#include<iostream>
using namespace std;
void swap(int*num1,int*num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int main(){
    int x,y,result;
    cout<<"input number x =";cin>>x;
    cout<<"input number y =";cin>>y;
    swap(&x,&y);
    cout<<" number x ="<<x;
    cout<<" number y ="<<y;
    return 0;
}