// Q4 - Using pointers, find the sum of elements present on the primary diagonal of the given n x
// n 2-D matrix.
// The first line of input contains the n, the size of the matrix.
// The next n lines contain the number of elements present in each row of the matrix.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    int arr[n][n];

    //input of array
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(*(arr+i)+i);
    }
    cout<<sum;
    return 0;
}