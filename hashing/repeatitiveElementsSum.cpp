#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){

    cout<<"give the length of the array : ";
    int n;cin>>n;
    cout<<"enter the elements in the array : ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //declaring a map 
    map<int,int> frequency_tracker;


    // forming the frequency tracker for complete array
    // (key= element of array & value= frequency of element)
    for(int i=0;i<n;i++){
        if(frequency_tracker.find(arr[i])!=frequency_tracker.end()){    // key found
            frequency_tracker[arr[i]]++;
        }
        else{                                                           //not found
            frequency_tracker[arr[i]]=1;
        }
    }

    // checking the repetitive elements in the map
    int sum=0;
    for(auto ele:frequency_tracker){
        if(ele.second>1) sum+=ele.first;
    }

    // printing the sum of repetitive elements
    cout<<"the sum is : ";
    cout<<sum<<endl;


    return 0;
}