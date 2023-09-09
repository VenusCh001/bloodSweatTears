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
        for(int j=i+1;j<size;j++ ){
            for(int k=j+1;k<size;k++ ){
            	if(arr[i]+arr[j]+arr[k]==target) {
			    	count++;
					cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }

	cout<<count;
    
	return 0;		
}
	

