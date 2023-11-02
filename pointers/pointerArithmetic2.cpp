#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int *ptr=arr+2;
    cout<<"ptr : "<<ptr<<" ";
    cout<<"*ptr : "<<*ptr<<"\n";
*ptr++;
    cout<<"*ptr : "<<*ptr<<" ";
*ptr--;
    cout<<"*ptr : "<<*ptr<<"\n";


    return 0;
}
