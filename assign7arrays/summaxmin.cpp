#include <iostream>
using namespace std;
int main() {
	int arr[]={4,6,2,8,9,12};
	int max,min;

	for(int index=0;index<5;index++){
		if(arr[index]>arr[index+1]){
			max=arr[index];
		}
		else{
			max=arr[index+1];
		}
			
	}
	for(int index=0;index<=5;index++){
			int flag=1;
			cout<<index<<endl;
			for(int j=0;j<5;j++){
				if(arr[index]<=arr[j] ){
            		flag=flag*1;
					cout<<flag<<" ";
					}
				
				else{
           			 flag=0;
					 
					}
					}
			cout<<endl;		
			if (flag==1){
				min=arr[index];
				break;
			}
			else{
				continue;
			}
	}
	cout<<"max is: "<<max<<endl;
    cout<<"min is: "<<min<<endl;
    cout<<"sum is: "<<max+min<<endl;


	return 0;
}