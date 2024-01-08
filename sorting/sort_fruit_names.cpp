#include<iostream>
using namespace std;
void sort(string *arr,int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index=j;
            }
        }
        if(arr[i]!=arr[min_index]){
            swap(arr[i],arr[min_index]);
        }
    }
}
int main(){
    string arr[]={"papaya","mango","grapes","watermelon","guava"};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}