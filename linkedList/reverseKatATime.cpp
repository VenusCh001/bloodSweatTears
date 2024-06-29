#include<iostream>
using namespace std;

class node {  
public:  
  int data;  
  node *next;  
  
  node(int val) {  
    data = val;  
    next = NULL;  
  }  
};  

  void insertAtBeginning(node*&head,int val) {  
    node *newnode = new node(val);  
    newnode->next = head;  
    head = newnode;  
  }  
  
  void insertAtEnd(node*&head,int val) {  
    node *newnode = new node(val);  
    if (head == NULL) {  
      head = newnode;  
      return;  
    }  
    node *temp = head;  
    while (temp->next != NULL) {  
      temp = temp->next;  
    }  
    temp->next = newnode;  
  }

  void printelements(node*&head) {  
  node *temp = head;  
  while (temp != NULL) {  
    cout << temp->data << " -> ";  
    temp = temp->next;  
  }  
  cout << endl;  
}  

node* reverseK(node* &head,node* &prev,node* &current,int k){
        node*nextptr;
        current=prev->next;
        int count=1;

        while (count!= k) {
            nextptr = current->next;
            current->next = prev;
            prev = current;
            current = nextptr;
            count++;
        }
        return nextptr;
    }

int main(){
    node*head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    printelements(head);
    cout<<endl;

    int k;cout<<"give the value for k : ";cin>>k;

node*current=head;

    while(current!=NULL){
        node*next =reverseK(head,next,current,k);
    }

    cout<<"after reversing k links in the linked list : "<<endl;
    printelements(head);
    cout<<endl;
}