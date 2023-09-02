//Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include<iostream>
using namespace std;
int main(){
    float x,y;
    cin>>x>>y;
    cout<<"number first "<<x<<endl;
    cout<<"number second "<<y<<endl;
    cout<<"adding "<<(x+y)<<endl;
    cout<<"negating  "<<(x-y)<<endl;
    cout<<"multiplying "<<(x*y)<<endl;
    cout<<"dividing "<<(x/y)<<endl;
    
    return 0;
}