#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*previous;
    node*next;
    node(int val){
        data=val;
        previous=NULL;
        next=NULL;
    }
};
void insertAtHead(node*&head,int val){
    node*n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->previous=n;
    }
    head=n;
}
void insertAtTail(node*&head,int val){
    node*n=new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}
void deleteAtHead(node* &head){
    node*todelete=head;
    head=head->next;
    head->previous=NULL;
    delete todelete;
}
void deletion(node * &head,int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node*temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    node*todelete=temp;
    
    temp->previous->next=temp->next;
    if(temp->next!=NULL){
         temp->next->previous=temp->previous;;
    }
    delete todelete;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
    }cout<<endl;
}

int main(){
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    cout<<"after insertion at tail the doubly ll is :";display(head);cout<<endl;
    insertAtHead(head,5);
    cout<<"after insertion at head the doubly ll is :";display(head);cout<<endl;
    deletion(head,5);
    cout<<"after deletion at 5th pos doubly ll is :";display(head);cout<<endl;

    cout<<"name: venus chaudhary"<<endl;
    cout<<"id:22201012022";
    return 0;
}