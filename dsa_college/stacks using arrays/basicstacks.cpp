#include<iostream>
#include<string>
using namespace std;
#define n 100
class mystack{
    int *arr;
    int top;
    public:
    mystack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow";return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"no element to pop";return;
        }
        top--;
    }
   void Top(){
        
        cout<< arr[top]<<endl;
    }
    bool isempty(){
        if( top==-1){
            cout<<"stack is empty"<<endl;return 1;
    }
    cout<<"stack is not empty";
        return 0;
    }
    void isfull(){
        if(top==n-1){
            cout<<"stack overflow"<<endl;return;
        }
        cout<<"stack is not full";
    }
    void display(){
        while(top!=-1){
            cout<< arr[top]<<" ";
            pop();
        }
    }
};

int main(){
    mystack st;
    int x;
    cout<<"enter your choice:"<<endl;
    cout<<"1-push elements"<<endl;
    cout<<"2-pop elements"<<endl;
    cout<<"3-check if stack is empty"<<endl;
    cout<<"4-check if stack is full"<<endl;
    cout<<"5-diplacy top elements of stack"<<endl;
    cout<<"6-display all elements of stack"<<endl;
    int choice;
    do{
        cout<<endl<<"enter your choice : ";
        cin >>choice;
        switch(choice){
        case 1 :
        cout<<"enter value to be pushed :";cin>>x;
        st.push(x);break;
        case 2:
        st.pop();break;
        case 3 :
        st.isempty();break;
        case 4 :
        st.isfull();break;
        case 5 :
        st.Top();break;
        case 6 :
        st.display();break;
        
    }
    }
    while (choice!=7);
   
    cout<<"name-venus chaudhary"<<endl;
    cout<<"22201012022";

    return 0;
}