#include<iostream>
using namespace std;
int largest(int x,int y,int z){
    if((x>y) && (x>z)){
        return x;
    }
    else if((y>x) && (y>z)){
        return y;
    }
    else {
        return z;
    }return 0;
}
void smallest(int x,int y,int z,int*small){
   *small= min(x,min(y,z));
}
int main(){
    int x,y,z,result,small;
    cout<<"input number 1st ";cin>>x;
    cout<<"input number 2nd ";cin>>y;
    cout<<"input number 3rd ";cin>>z;
    int large=largest(x,y,z);
    smallest(x,y,z,&small);
    cout<<"largest is : "<<large<<"\n";
    cout<<"smallest is : "<<small;


    return 0;
}
