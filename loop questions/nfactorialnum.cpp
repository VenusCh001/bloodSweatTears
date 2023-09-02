#include<iostream>
using namespace std;
int main(){
    int fac=1;
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        fac=fac*i;
        cout<<fac<<endl;
    }
}