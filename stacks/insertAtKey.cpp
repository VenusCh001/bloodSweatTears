#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);  
    st.push(20);
    st.push(30);
    st.push(40);

    int n=st.size();
    stack<int>temp;
    int count=0;
    int key=2;

    while(count<n-key){
        int curr=st.top();
        temp.push(curr);
        st.pop();
        count++;
    }
    int newValue=50;
    st.push(newValue);
    while(!temp.empty()){
        int curr=temp.top();
        st.push(curr);
        temp.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}