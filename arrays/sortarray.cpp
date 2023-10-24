#include <iostream>
using namespace std;
int main() {
	int n;cout<<"number of elements : ";cin>>n;int arr[n];
	for(int index=0;index<n;index++){
		cin>>arr[index];}
	cout<<"original array is : ";
	for(int index=0;index<n;index++){
		cout<<arr[index]<<" ";}
	for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }}
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;}
	cout<<endl<<"sorted array is : ";
    for(int index=0;index<n;index++){
		cout<<arr[index]<<" ";			
	}
	cout<<endl;
	cout<<"name-VENUS CHAUDHARY "<<endl;
	cout<<"rollno-22201012022"<<endl;
	return 0;
}
