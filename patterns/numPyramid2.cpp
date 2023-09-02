#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter rows : ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=i;j<row;j++){
            cout<<" ";}
        for(int j=1;j<=((2*i)-1);j++){ 
            
            if (j==1 || j==((2*i)-1) || i==row){
                    cout<<i;}
            else{
                cout<<" ";
                }
        }
        cout<<endl;
}
return 0;
}
