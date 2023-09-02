#include<iostream>
using namespace std;
int main(){
    int digit;
    int power=1;
    int value=0;
    int sum=0;
    for(int i=1;i<=5;i++){
        sum+=i;}
        cout<<"value of sum is "<<sum<<"\n";
    while (sum>0){
            digit=sum%2;
            value+=digit*power;
            sum/=2;
            power*=10;
        }
        
    
    cout<<value;

    return 0;
}