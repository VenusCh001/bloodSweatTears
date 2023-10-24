// C++ program to display max out of array elements

#include <iostream>
using namespace std;
int main() {
	int n;cout<<"number of elements : ";cin>>n;
	int arr[n];
	for(int index=0;index<n;index++){
		cin>>arr[index];
	}
	int max=INT_MIN;
	int min=INT_MAX;
	for(int index=0;index<n;index++){
		if(arr[index]>max){
			max=arr[index];
		}
		if (arr[index]<min){
			min=arr[index];
		}		
	}
	cout<<"max is: "<<max<<endl;
	cout<<"min is: "<<min<<endl;
	cout<<"name-VENUS CHAUDHARY "<<endl;
	cout<<"rollno-22201012022"<<endl;
	return 0;
}