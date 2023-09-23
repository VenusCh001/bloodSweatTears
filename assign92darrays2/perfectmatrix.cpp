#include<iostream>
#include<vector>
using namespace std;
int perfectmatrix(int m,int n){
    vector<vector<int>> A(m,vector<int>(n));
    int flag;
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m-1;i++){
        if(A[i][i]==A[i+1][i+1]){
            flag=1;
        }
        else{
            flag=0;break;
        }
    }
    return flag;
}

int main(){
    int m,n,value;
    cout<<"enter rows : ";cin>>m;
    cout<<"enter column : ";cin>>n;
    value=perfectmatrix(m,n);
    cout<<endl<<value;
return 0;
}