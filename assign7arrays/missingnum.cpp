

#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,3,5,0};
	int n=5;
    int length=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int originalSum;
	
	for(int index=0;index<length;index++){
		sum+=arr[index];	
	}
    originalSum=(n*(n+1))/2;

	cout<<originalSum-sum<<endl;
    
	return 0;
}
