#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
    void insertatbegin(node*&head,int val){
        node*newnode=new node(val);
        if(head==NULL){
            newnode=head;
        }
        newnode->next=head;
        head=newnode;
    }
    void insertAtend(node*&head,int val){
        node*newnode=new node(val);
        if(head==NULL){
            newnode=head;
        }
        node*temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newnode;

    }
    void print(node*head){
        node*temp=head;
        while(temp){
            cout<<temp->data<<"-->";
            temp=temp->next;
        }
    }
    void deleteAthead(node*&head){
        if(head==NULL){
            return;
        }
        node*todelete=head;
        head=head->next;
        delete todelete;
    }
    void deleteAtEnd(node*&head){
        node*temp=head;
        while(temp->next->next){
            temp=temp->next;
        }
        node*todelete=temp->next;
        temp->next=NULL;
        delete todelete;
    }
    void insertAtrandom(node*&head,int index,int val){
        node*newnode=new node(val);
        int count=1;
        node*temp=head;
        while(count<index-1){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void deleteAtPosition(node*&head,int index){
        node*temp=head;
        int count=1;
        if(index==1)deleteAthead(head);
        else{
            while(count<index-1){
                temp=temp->next;
                count++;
            }
            node*todelete=temp->next;
            temp->next=temp->next->next;
            delete todelete;
        }
        
    }
    void reverse(node*&head){
        node*prev=NULL;
        node*curr=head;
        node*next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    node*middle(node*&head){
        node*slow=head;
        node*fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    

int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);

cout<<cycle(head);

    

    return 0;
}