#include<iostream>
using namespace std;
int main(){
    int num,count;
    count=0;
    cout<<" enter number : ";
    cin>>num;
    while(num>0){
        num=num/10;
        count++;
    }
    cout<<"total digits : "<<count;
    return 0;
}