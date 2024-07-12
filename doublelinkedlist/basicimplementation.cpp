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
    void insertAtkthposition(int k,int val){
        int count=0;
        node*temp=head;
        while(count<k-1){
            temp=temp->next;
            count++;
        }
        node*newnode=new node(val);
        temp->next->prev=newnode;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
    }
    void deletenode(int k){
        if(head==NULL){
            return;
        }
        else if(k==1){
            node*todelete=head;
            head=head->next;
            if(head) head->prev=NULL;
            else head=tail=NULL;
            delete todelete;
        }
        else{
            node*temp=head;
            int count=1;
            while(count<k){
                temp=temp->next;
                count++;
            }
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
            delete temp;
        }
    }
    void display(){
        node*temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
    void reverse(){
        node*current=head;
        while(current){
            node*nextptr=current->next;
            current->next=current->prev;
            current->prev=nextptr;
            current=nextptr;
        }
        node*temp=head;
        head=tail;
        tail=temp;
        display();
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
    LL.insertAtkthposition(2,39);
    LL.insertAtkthposition(3,42);
    LL.insertAtkthposition(4,49);

    LL.display();
    LL.deletenode(2);
    LL.display();
    cout<<"after reverse i get : "<<endl;
    LL.reverse();
    LL.display();
    return 0;
}