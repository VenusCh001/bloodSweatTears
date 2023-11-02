#include<iostream>
using namespace std;
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int (*ptr)[8]=&arr;
    cout<<"ptr : "<<ptr<<" ";
    cout<<"*ptr : "<<*ptr<<"\n";

    cout<<arr<<" ";
    cout<<arr+1;
    return 0;
}
