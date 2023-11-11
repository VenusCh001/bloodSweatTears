#include<iostream>
using namespace std;
int sumOfDigits(int num){
    //base condition
    if(num<=0){
        return 0;
    }

    return num%10+sumOfDigits(num/10);
    
}
int main(){
    cout<<sumOfDigits(1234);
    return 0;
}
