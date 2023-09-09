#include <iostream>
using namespace std;

int maximum(int arr[],int size,int max){
    int index=0;
    for(int j=0;j<size;j++){
        if(arr[j]>max) {
            index=j;
        }
    }
    return index;
}

int main(){
    int arr[]={4,8,9,9};
	int secondmax,index;
    index=0;
	int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];

    int max_Index=maximum( arr,size,max);
    cout<<"max is "<<arr[max_Index]<<endl;

    for(int j=0;j<size;j++){
        if(arr[j]==arr[max_Index]) {
            arr[j]=-1;
        }
    }

    int secondmax_index=maximum(arr,size,max);
    cout<<"secondmax is "<<arr[secondmax_index];

    return 0;
}
	

