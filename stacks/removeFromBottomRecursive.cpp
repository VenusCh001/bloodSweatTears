#include<iostream>
#include<stack>
using namespace std;
int count=0;
void recursive(stack<int> &st,int n){
    if(count==n-1){
        st.pop();
        return;
    }
    int curr=st.top();
    st.pop();
    count++;
    recursive(st,n);
    st.push(curr);
}
int main(){
    stack<int>st;
    stack<int>temp;

    st.push(100);st.push(20);st.push(30);st.push(40);
    int n=st.size();
    recursive(st,n);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}