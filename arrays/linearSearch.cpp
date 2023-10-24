

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
	if(flag>=0){
		cout<<"element found at index = "<<flag;
	}
	else{
		cout<<"element not found";
	}
	cout<<endl;
	cout<<"name-VENUS CHAUDHARY "<<endl;
	cout<<"rollno-22201012022"<<endl;
	return 0;
}
