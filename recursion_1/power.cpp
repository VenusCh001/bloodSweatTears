#include<iostream>
using namespace std;
int powerCalculation(int p,int q){
    if(q<=0){
        return 1;
    }
    return p*powerCalculation(p,q-1);
}
int main(){
    int p,q;
    cin>>p;
    cin>>q;
    cout<<powerCalculation(p,q);
    return 0;
}