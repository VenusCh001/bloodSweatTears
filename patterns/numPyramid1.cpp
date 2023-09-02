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
        for(int j=1;j<=i;j++){
            cout<<j;
    }
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }


        cout<<endl;}
    return 0;
    

}

