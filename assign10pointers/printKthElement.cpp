//Q1 -Write a program to print the kth element of an array using pointers.
//The first line of the input contains the size of the array and the value of k.
//The second line of input contains the elements of the array. You can assume that 0 <= k < size
//of the array.
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"enter array size : ";cin>>n;int arr[n];
    cout<<"enter value of k : ";cin>>k;
    cout<<"enter elements"<<endl;
    int i=0;
    while(i!=n){
        cin>>arr[i];
        i++;
    }
    cout<<"element at "<<k<<"th position is : "<<*(arr+k);
    return 0;


}