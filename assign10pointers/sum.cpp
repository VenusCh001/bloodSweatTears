//Write a program to find the sum of all the elements of an array. Use pointers to traverse the array.
//The first line of the input contains the size of the array.
//The second line of input contains the elements of the array.
#include<iostream>
using namespace std;
int main(){
    int n,k;
    int sum=0;
    cout<<"enter array size : ";
    cin>>n;int arr[n];
    cout<<"enter elements"<<endl;
    int *ptr=arr;

    int i=0;
    while(i!=n){
        cin>>*ptr;
        ptr++;
        i++;
    }
    ptr=arr;
    i=0;
    while(i!=n){
        sum+=*ptr;
        ptr++;
        i++;
    }
    cout<<"sum is : "<<sum;
    return 0;


}