#include<iostream>
using namespace std;
int product(int num1,int num2){
    if(num2==0 || num1==0){
        return 0;
    }
    return ((num1>num2) ? num1 + product(num1,num2-1) : num2 + product(num1-1,num2)) ;
}
int main(){
    int firstNum,SecondNum;
    cout<<"enter first number : ";cin>>firstNum;
    cout<<"enter second number : ";cin>>SecondNum;
    cout<<product(firstNum,SecondNum);
    return 0;
}

//4 X 10 =40
