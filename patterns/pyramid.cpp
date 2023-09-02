#include<iostream>
using namespace std;
int main(){
    int row,i,k;
    cout<<"enter rows : ";
    cin>>row;
    for(i=1, k=row;i<=row, k>=1;i++,k--){
        for(int j=1;j<k;j++){
            cout<<" ";
        }
        for(int m=1;m<=((2*i)-1);m++){
            cout<<"*";
    }
        cout<<endl;}
    return 0;
    

}

