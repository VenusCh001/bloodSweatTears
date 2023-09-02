#include<iostream>
using namespace std;
int main(){
    int num,lastDigit;
   
    for(int i=0;i<=500;i++){
        int sum=0;
        num=i;
        while(num>0){
        lastDigit=num%10;
        sum=sum+((lastDigit*lastDigit)*lastDigit);
        num=num/10;}

        if(sum==i) {
            cout<<i<<endl;
        }
    }
    return 0;
    }
    
    
   