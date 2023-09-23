#include<iostream>
#include<vector>
using namespace std;     
void answer(vector<vector<int>> &A){
int min=INT_MIN;int index;int col=A[0].size();
for(int i=0;i<A.size();i++){
    for(int j=0;j<col;j++){
        if(A[i][j]==1){
            index=i;
        }
        if (min<index){
        min=index;
    }break;
    }
    }
    cout<<"row = "<<min+1;
    }         
int main(){
    int m,n;
    cout<<"enter row";cin>>m;
    cout<<"enter column";cin>>n;
    vector<vector<int>> A(m,vector<int>(n));
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    answer(A);
    return 0;
}