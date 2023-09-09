#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,1,4,5,2,5};
	
	int size=sizeof(arr)/sizeof(arr[0]);
    
	
	for(int i=0;i<size;i++){
        int flag=1;
        for(int j=0;j<size;j++){
            if(arr[i]-arr[j]==0 && i!=j) {
                flag=0;
			    break;
			}
            else{
                flag=flag*1;
            }
        }
        if (flag==1){
            cout<<"unique piece is "<<arr[i];
        }
    }
	return 0;
	}
	

