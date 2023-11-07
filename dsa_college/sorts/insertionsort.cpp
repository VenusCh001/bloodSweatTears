#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;cout<<"enter n  ";cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=1;i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"name-venus chaudhary"<<endl;
cout<<"id-22201012022";
return 0;
}
