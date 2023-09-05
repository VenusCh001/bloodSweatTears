

#include <iostream>
using namespace std;

int main() {
	int arr1[]={4,6,2,8,9,12};
	

	
	for(int index=0,int size=5;index<size;index++,size--){
		int temp=arr1[index];
        arr1[index]=arr1[size];
        arr1[size]=temp;
				
	}
    for(int index=0;index<5;index++){
		cout<<arr1[index]<<" ";
				
	}

	

	return 0;
}
