//Q4- Write a program to print positive number entered by the user, if user enters a negative
//number, it is skipped.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter an integer : ";
    cin>>num;
    if(num>0){
        cout<<"number is: "<<(num);
    }
    else{
        cout<<"number is skipped as it is negative";
    }
    return 0;
}