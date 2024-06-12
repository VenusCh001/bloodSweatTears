#include<iostream>
using namespace std;
int mountainPeakElement(int mountainArray[]){
    int lo=0;
    int hi=3;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mountainArray[mid]>mountainArray[mid+1] and mountainArray[mid]>mountainArray[mid-1]){
            return mid;
        }
        else if(mountainArray[mid]>mountainArray[mid-1] and mountainArray[mid]<mountainArray[mid+1]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}
int main(){
    int mountainArray[]={0,4,1,0};
    cout<<"index is : "<<mountainPeakElement(mountainArray);
    return 0;
}