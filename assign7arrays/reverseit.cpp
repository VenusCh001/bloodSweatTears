#include <iostream>
using namespace std;
int main() {
	int n;cout<<"number of elements : ";cin>>n;
	int arr[n];
	for(int index=0;index<n;index++){
		cin>>arr[index];}
	cout<<"original array is : ";
	for(int index=0;index<n;index++){
		cout<<arr[index]<<" ";}
	int start=0;int end=n-1;
	while(start<end){
		int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
		start++;end--;
	}
	cout<<endl<<"reversed array is : ";
    for(int index=0;index<n;index++){
		cout<<arr[index]<<" ";			
	}
	cout<<endl;
	cout<<"name-VENUS CHAUDHARY "<<endl;
	cout<<"rollno-22201012022"<<endl;
	return 0;
}
