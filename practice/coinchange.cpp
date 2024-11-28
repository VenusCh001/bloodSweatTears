#include<iostream>
#include<vector>
using namespace std;
int coinchange(vector<int>arr,int amount,int index){
    if(amount==0)return 1;
    if(amount<0 || index==arr.size()) return 0;
    return coinchange(arr,amount-arr[index],index)+coinchange(arr,amount,index+1);
}
int main(){
    vector<int>arr={1,2,3};
    int amount=4;
    cout<<coinchange(arr,amount,0);
    return 0;
}