#include<iostream>
using namespace std;
int main(){
    float f=11.6;
    int x=90;
    void *ptr=&f;
    cout<<ptr<<" ";
    ptr=&x;
    cout<<ptr<<" ";
   float *integerpointer=(float*)ptr;
    cout<<*integerpointer<<" ";
    return 0;
}