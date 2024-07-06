#include<iostream>
#include<stack>
using namespace std;

void recursive(stack<int> &st,int newValue){
        if(st.empty()) {
            st.push(newValue);
            return;
        }
        int curr=st.top();
        st.pop();
        recursive(st,newValue);
        st.push(curr);
    }
int main(){
    stack<int> st;
    st.push(1);  
    st.push(20);
    st.push(30);
    st.push(40);

    int newValue=50;
    recursive(st,newValue);

    while(!st.empty()){
        cout<<st.top()<<"->";
        st.pop();
    }

    return 0;
}