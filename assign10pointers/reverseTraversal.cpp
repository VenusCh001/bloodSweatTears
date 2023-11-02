// Write a program to traverse the array in the reverse order using pointers.
// The first line of the input contains the size of the array.
// The second line of input contains the elements of the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    int arr[n];
    //input of array
    cout<<"enter elements"<<endl;
    int *ptr=arr;
    int i=0;
    while(i!=n){
        cin>>*ptr;
        ptr++;
        i++;
    }
    //output of reverse
    ptr=arr+n-1;
     i=0;
    while(i!=n){
        cout<<*ptr<<" ";
        ptr--;
        i++;
    }
    return 0;
}