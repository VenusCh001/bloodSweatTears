#include<iostream>
#include<vector>
using namespace std;

void rectanglesum(vector<vector<int>>&a,int l1,int l2,int r1,int r2){
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=a[i][j];
        }
    }
    cout<<"sum:"<<sum;
}

int main(){
int n,m;
cin>>n>>m;

vector<vector<int>> a(n,vector<int>(m));

cout<<"enter elements  :"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
int l1,l2,r1,r2;

cout<<"ener first coordinates";
cin>>l1>>r1;

cout<<"ener second coordinates";
cin>>l2>>r2;

cout<<endl<<"2d array  is :"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
rectanglesum(a,l1,l2,r1,r2);

    

    return 0;
}


