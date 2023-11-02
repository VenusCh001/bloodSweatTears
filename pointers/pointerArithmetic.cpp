
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int *ptr=&arr[0];
    cout<<"ptr : "<<ptr<<" ";
    cout<<"*ptr : "<<*ptr<<"\n";

    cout<<"ptr++ : "<<ptr++<<" ";
    cout<<"ptr : "<<ptr<<" ";

    cout<<"*ptr : "<<*ptr<<"\n";

    cout<<"*ptr++ : "<<*ptr++<<"\n";

    cout<<"(*ptr)++ : "<<(*ptr)++<<"\n";

    cout<<"*++ptr : "<<*++ptr<<"\n";
    cout<<"++*ptr : "<<++*ptr<<"\n";
    cout<<"*(ptr+2): "<<*(ptr+2)<<"\n";

    *(arr+6)=100;
    for(int i=0;i<8;i++){
        cout<<*(arr+i)<<" ";
    }

    return 0;
}
