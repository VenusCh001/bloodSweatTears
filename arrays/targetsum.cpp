#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,3,4,5,6,7};
	int target;
    cout<<"enter target sum : ";
	cin>>target;
	int size=sizeof(arr)/sizeof(arr[0]);
    
	int count=0;
	for(int i=0;i<size;i++){
        for(int k=i+1;k<size;k++ ){
            			if(arr[i]+arr[j]==target) {
			    			count++;
							
                
						}
				
        }
      
    }
	cout<<count;
	return 0;
		
			
	}
	

