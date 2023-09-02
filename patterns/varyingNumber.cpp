#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"enter rows : ";
    cin>>row;
    for(int i=1,k=row;i<=row,k>=1;i++,k--){
        int num=i;
        for(int j=1;j<=k;j++){
            cout<<num;
            num++;
        }
        for(int j=1;j<i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
    

}