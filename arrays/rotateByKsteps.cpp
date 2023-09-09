#include <iostream>
using namespace std;

int main() {
    int size,arr1[6],arr2[6],k;
    size=6;

    cout<<"enter elements : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }

    cout<<"enter number of steps :";
    cin>>k;

    for(int i=0;i<size;i++){
        int index=i+k;
        if(index<size){
            arr2[index]=arr1[i];
        }
        else{
            arr2[index%size]=arr1[i];
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl<<"rotated array is"<<endl;

    for(int i=0;i<size;i++){
        cout<<arr2[i]<<" ";
    }
	return 0;
	}
	

