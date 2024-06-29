#include <iostream>    
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
  
  void deleteAtBeginning(node*&head) {  
    if (head == NULL) {  
      return;  
    }  
    node *temp = head;  
    head = head->next;  
    delete temp;  
  }  
  
void printelements(node*&head) {  
  node *temp = head;  
  while (temp != NULL) {  
    cout << temp->data << " ";  
    temp = temp->next;  
  }  
  cout << endl;  
}  
void reverse(node*&head)
    {
        node* current = head;
        node *prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        printelements(head);
    }

