#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int sum=0;
    int evensum=0;
    
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        sum+=arr[i];
        if(i%2==0){
            evensum+=arr[i];
        }
    }
    cout<<"even sum "<<evensum<<endl;
    cout<<"odd sum "<<sum-evensum<<endl;
    cout<<"diff of even and odd sum "<<evensum-(sum-evensum)<<endl;




}