#include<iostream>
using namespace std;
void circle(int r){
    
        cout<<"area is "<<3.14*r*r<<endl;
        cout<<"circumference is "<<3.14*r*2<<endl;
    
}
int main(){
    int r;
    cout<<"enter radius : ";
    cin>>r;
    circle(r);
    return 0;
}