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
    int Top(){
        if(top==-1){
            cout<<"stack is empty";}
        return arr[top];}
    void isempty(){
        if( top==-1)
        cout<<"stack is empty";
    }};
int evaluatepostfix(mystack st,string s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');}
        else{
            int op2=st.Top();st.pop();
            int op1=st.Top();st.pop();
            switch(s[i]){
                case '+':
                    st.push(op1+op2);break;
                case '-':
                    st.push(op1-op2);break;
                case '*':
                    st.push(op1*op2);break;
                case '/':
                    st.push(op1/op2);break;
            }}}
    return st.Top();}
int main(){
    mystack st;
    string s;cout<<"enter exp ";cin>>s;
    cout<<evaluatepostfix(st,s);
    return 0;
}
