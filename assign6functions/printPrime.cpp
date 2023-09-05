#include<iostream>
using namespace std;
int prime(int x,int y,int i){
        int flag=1;
         for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
            }
            else{
                flag=flag*1;
            }
         }
         return flag;
         }

int main(){
    int a,b,flag;
    cout<<"enter nums : ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        flag=prime(a,b,i);
        if (flag==1){
            cout<<i<<" ";
        }
    }
    
    return 0;
}