#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,1,0,1,1,1,0,0};
    int sum;int maxsize=-1;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        sum=(arr[i]==1)?1:-1;
        for(int j=i+1;j<n;j++){
            arr[j]==1?sum+=1:sum+=-1;
            if((sum==0) && (maxsize<j-i+1)){
                maxsize=j-i+1;
            }
        }
    }
    cout<<maxsize;
    return 0;
}
