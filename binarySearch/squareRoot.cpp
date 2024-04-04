#include<iostream>
#include<vector>
using namespace std;
int squareRoot(int x){
    vector<int>arr(x/2);
    for(int i=1;i<=(x/2);i++){
        arr[i]=i;
    }
    int ans=-1;
    int lo=0;
    int hi=arr.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int num=arr[mid];
        if(num*num==x) return num;
        else if(num*num>x){
            hi=mid-1;
        }
        else{
            ans=num;
            lo=mid+1;
        }

    }
    return ans;
}
int main(){
    int x;cout<<"enter x : ";cin>>x;
    cout<<squareRoot(x);
    return 0;
}