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

int main() {  
node*head=NULL;   
int choice;
    cout<<"1: Inserting element at beginning"<<endl;
    cout<<"2: Inserting element at the end"<<endl;
    cout<<"3: deletion from begining "<<endl;
    cout<<"4: reverse the linked list"<<endl;
    cout<<"5: Display all element"<<endl;
    cout<<"6: exit"<<endl;
    do {
        cout<<"Enter your choice : ";
        cin>>choice;
        switch (choice) {
            case 1: {
                cout<<"enter element to be inserted:";
                int item;
                cin>>item;
                insertAtBeginning(head,item);
                break;}
            case 2: {
                cout<<"enter element to be inserted:";
                int item;
                cin>>item;
                insertAtEnd(head,item);
                break;}
            case 3: deleteAtBeginning(head);
                break;
            case 4: reverse(head);
                break;
            case 5: printelements(head);
                break;
            case 6: cout<<"Exit"<<endl;
                break;
            default: cout<<"Invalid choice"<<endl;}
    } while(choice!=7);  
cout<<endl<<"name-venus chaudhary";
cout<<endl<<"roll no- 22201012022";
return 0;  
}  