#include<iostream>
using namespace std;
void f(int i,int j,int m,int n,int *sum){
    if((i==m)&&(j==n)){
        *sum=*sum+1;
        return;
    }
    if(j==n){
        f(i+1,j,m,n,sum);return;
    }
    if(i==m){
        f(i,j+1,m,n,sum);return;
    }
    f(i,j+1,m,n,sum);
    f(i+1,j,m,n,sum);
}
int main(){
    int m,n;
    int sum=0;
    int *temp=&sum;
    cout<<"row: ";cin>>m;
    cout<<"column: ";cin>>n;
    f(1,1,m,n,temp);
    cout<<sum;
    return 0;
}

