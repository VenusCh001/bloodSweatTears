#include<iostream>
using namespace std;
int main(){
    int x,y,result;
    cout<<"input number 1 ";cin>>x;
    cout<<"input number 2 ";cin>>y;
    int *ptr1=&x;
    int *ptr2=&y;
    int *product=&result;
    *product=(*ptr1) * (*ptr2);    
    cout<<"result is : "<<result;
    return 0;
}