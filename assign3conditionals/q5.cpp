//Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
//and division.
#include<iostream>
using namespace std;
int main(){
    char symbol;
    int num1,num2;
    cout<<"enter the operator (+ - * /) ";
    cin>>symbol;
    cout<<"enter numbers";
    cin>>num1>>num2;

    switch(symbol){
        case '+':
            cout<<" +  = "<<(num1+num2);
            break;
        case '-':
            cout<<" -  = "<<(num1-num2);
            break;
        case '*':
            cout<<" *  = "<<(num1*num2);
            break;
        case '/':
            cout<<" /  = "<<(num1/num2);
            break;
        default:
            cout<<"invalid";
    }
    return 0;
}