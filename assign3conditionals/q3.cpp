//Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
//calculate Profit or Loss.
#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cost price ";
    cin>>cp;
    cout<<"enter selling price ";
    cin>>sp;
    if(cp<sp){
        cout<<"profit = "<<(sp-cp);
    }
    else{
        cout<<"loss = "<<(cp-sp);
    }
    return 0;
}