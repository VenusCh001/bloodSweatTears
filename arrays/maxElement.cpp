// C++ program to display max out of array elements

#include <iostream>
using namespace std;

int main() {
	int arr[5];
	int max;
	for(int index=0;index<5;index++){
		cin>>arr[index];
	}
	max=arr[0];
	for(int index=0;index<5;index++){
		if(arr[index]>max){
			max=arr[index];
			cout<<max<<" ";
		}
		
			
	}
	cout<<"max is: "<<max;
	return 0;
}