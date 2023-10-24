#include<iostream>
using namespace std;
int main(){
    int arr[]={8,4,2,7,9};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);}}}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"name=venus chaudhary ";
    cout<<"rollno=22201012022";
    return 0;
}




