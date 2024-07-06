#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);  
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int>temp;
    while(!st.empty()){
        int curr=st.top();
        temp.push(curr);
        st.pop();
    }
    int newValue=50;
    st.push(newValue);
    while(!temp.empty()){
        int curr=temp.top();
        st.push(curr);
        temp.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<"->";
        st.pop();
    }

    return 0;
}