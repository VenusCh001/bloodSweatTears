#include<iostream>
using namespace std;
int main(){
    int digit,x,y;
    int power=1;
    int value=0;
    int bignum;
    cin>>x>>y;
    x>y?bignum=x:bignum=y;
    
    while (bignum>0){
            digit=bignum%10;
            value+=digit*power;
            bignum/=10;
            power*=2;
        }
        
    
    cout<<value;

    return 0;
}