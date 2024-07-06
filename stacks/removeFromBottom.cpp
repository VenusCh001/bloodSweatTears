#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>temp;

    st.push(100);st.push(20);st.push(30);st.push(40);

    while(not st.empty()){
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }

    temp.pop();

    while(!temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}