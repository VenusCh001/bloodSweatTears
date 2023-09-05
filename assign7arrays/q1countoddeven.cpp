

#include <iostream>
using namespace std;

int main() {
	int arr[]={4,6,2,8,9,12};
	int odd=0;
    int even=0;
	
	for(int index=0;index<sizeof(arr)/sizeof(arr[0]);index++){
		if(arr[index]%2!=0){
			odd++;
		}
        else{
            even++;
        }
		
			
	}
	cout<<"odd numbers are : "<<odd<<endl;
    cout<<"even numbers are : "<<even<<endl;

	return 0;
}
