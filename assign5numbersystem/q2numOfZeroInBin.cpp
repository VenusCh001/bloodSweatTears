#include<iostream>
using namespace std;
int main(){
    int lastDigit,num,digit;
    int power=1;
    int count=0;
    int value=0;
    cout<<"enter num:  ";
    cin>>num;
    while (num>0){
            digit=num%2;
            value+=digit*power;
            num/=2;
            power*=10;
        }
    cout<<"the binary form is :"<<value<<endl;
    while (value>0){
            lastDigit=value%10;
            if (lastDigit==0){
                count++;
            }
            value/=10;
    
        }
        
    
    cout<<"number of zeroes : "<<count;

    return 0;
}