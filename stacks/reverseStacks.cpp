#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st,int newValue){
    stack<int>temp;
    while(!st.empty()){
        int curr=st.top();
        temp.push(curr);
        st.pop();
    }
    st.push(newValue);
    while(!temp.empty()){
        int curr=temp.top();
        st.push(curr);
        temp.pop();
    }
}
void reverse(stack<int>&st){
    if(st.empty()) return;
    int curr=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,curr);
}
int main(){
stack<int>st;
    st.push(1);  
    st.push(20);
    st.push(30);
    st.push(40);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}