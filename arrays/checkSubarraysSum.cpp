#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,1,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum1,sum2;
    int totalSum=0;
    
    for(int i=0;i<size;i++){
        totalSum+=arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    for(int i=0;i<size;i++){
        sum1+=arr[i];
        if(sum1==(totalSum-sum1)){
            cout<<"yes";
            break;
        }
        
    }
    
    
    return 0;
}
