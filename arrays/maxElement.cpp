// C++ program to display max out of array elements

#include <iostream>
using namespace std;

int main() {
	int arr[5];
	int max;
	for(int index=0;index<5;index++){
		cin>>arr[index];
	}
	for(int index=0;index<4;index++){
		if(arr[index]>arr[index+1]){
			max=arr[index];
		}
		else{
			max=arr[index+1];
		}
			
	}
	cout<<"max is: "<<max;
	return 0;
}