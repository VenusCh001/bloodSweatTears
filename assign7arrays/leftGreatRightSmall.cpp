#include <iostream>
using namespace std;
int main() {
    int arr[]={1,6,5,3,10,8,9}	;
    int n=sizeof(arr)/sizeof(arr[0]);
  
	for(int index=1;index<n;index++){
			int flag1=1;
            int flag2=1;
			for(int j=index+1;j<n-1;j++){
				if(arr[index]<arr[j] ){
            		flag1=flag1*1;
					}
				
				else{
           			 flag1=0;
					 }
					}
            for(int k=index-1;k>=0;k--){
				if(arr[index]>arr[k] ){
            		flag2=flag2*1;
					}
				
				else{
           			 flag2=0;
					 }
					}
           
			if (flag1==1 && flag2==1){
				cout<<arr[index];
				break;
			}
            else if(index==n-1 && (flag1==0 || flag2==0)){
                cout<<"-1";
                break;
            }
			else{
				continue;
			}
	}
    


	return 0;
}