#include<iostream>
using namespace std;
void eligible(int age){
    if(age>=18){
        cout<<"you can vote ";
    }
    else{
        cout<<"you cannot vote ";
    }
}
int main(){
    int age;
    cout<<"enter age : ";
    cin>>age;
    eligible(age);
    return 0;
}