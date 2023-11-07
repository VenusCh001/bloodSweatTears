#include<iostream>
#include<vector>
using namespace std;
int main(){

int n;cout<<"enter n  ";cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int counter=1;
while(counter<n){
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        
    }counter++;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"name-venus chaudhary"<<endl;
cout<<"id-22201012022";
return 0;
}


