#include<iostream>
#include<stack>
using namespace std;
stack<int>st2;
void recursion(stack<int>st){
    if(st.empty())return;
    st.pop();
    recursion(st);
    st2.push(st.top());
    cout<<st2.top()<<" ";
}
int main(){
    stack<int>st;
    st.push(1);st.push(2);st.push(3);st.push(4);
    recursion(st);
    cout<<st2.top();
    return 0;

}