

#include <iostream>
using namespace std;

int main() {
	int arr[]={4,6,2,8,9,12};
	int key;
	cin>>key;
	int flag=-1;
	
	for(int index=0;index<sizeof(arr)/sizeof(arr[0]);index++){
		if(arr[index]==key){
			flag=index;
            break;
		}
		
			
	}
	cout<<flag;
	return 0;
}
