#include<iostream>
using namespace std;
int powerCalculation(int p,int q){
    int result;
    //base condition
    if(q<=0){
        return 1;
    }
    //even power
    if(q%2==0){
        result=powerCalculation(p,q/2);
        return result*result;
    }
    //odd power
    else{
        result=powerCalculation(p,(q-1)/2);
        return p*result*result;
    }
    
}
int main(){
    int p,q;
    cin>>p;
    cin>>q;
    cout<<powerCalculation(p,q);
    return 0;
}