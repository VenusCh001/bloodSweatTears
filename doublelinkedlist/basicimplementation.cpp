#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
class doubleLL{
    public:
    node*head;
    node*tail;
    doubleLL(){
        head=NULL;
        tail=NULL;
    }
    void insertAthead(int val){
        node*newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    void insertAttail(int val){
        node*newnode=new node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        tail->next=newnode;
        newnode->prev=tail;
    }
    
    void display(){
        node*temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    doubleLL LL;
    LL.insertAthead(1);
    LL.display();
    LL.insertAthead(2);
    LL.display();
    LL.insertAthead(3);
    LL.display();
    return 0;
}