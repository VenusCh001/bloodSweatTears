#include<iostream>
#include<queue>
using namespace std;
void reverse(queue<int>&q){
    if(q.front()==q.back()){
        return;
    }
    int data=q.front();
    q.pop();
    reverse(q);
    q.push(data);
}
int main(){
    queue<int>q;
    q.push(10),q.push(20);q.push(30);q.push(40);
    reverse(q);
    while(not q.empty()){
        cout<<q.front()<<"-";
        q.pop();
    }
    return 0;
}