#include<iostream>
using namespace std;
int main(){
    int size=5;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){
            if(i==3 || j==3){
                cout<<"+";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}