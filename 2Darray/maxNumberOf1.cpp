#include<iostream>
#include<vector>
using namespace std;              
int main(){
    int m,n,index;
    cout<<"enter row";cin>>m;
    cout<<"enter column";cin>>n;
    int max=INT_MIN;
    vector<vector<int>> A(m,vector<int>(n));
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=A[i][j];
        }
        if (sum>max){
            max=sum;
            index=i+1;
        }}
        cout<<"row = "<<index;
    return 0;
}