#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"enter rows : ";
    cin>>row;
    cout<<"enter columns : ";
    cin>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if (i==1 || i==row || j==1 || j==column){
                    cout<<j;}
            else{
                cout<<" ";

            }
        }
        cout<<endl;
    }
    return 0;
    

}