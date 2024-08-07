#include<iostream>
#include"node.h"
using namespace std;

node* merge2LinkedList(node* &head1,node* &head2){
    node* dummyNode=new node(-1);
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummyNode;
    while(ptr1 and ptr2){
        if(ptr1->data < ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
    }
    while(ptr2){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
    }
    return dummyNode->next;

}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    node* mergedLLHead=NULL;

    insertAtEnd(head1,3);
    insertAtEnd(head1,4);
    insertAtEnd(head1,5);
    insertAtEnd(head1,9);

    insertAtEnd(head2,1);
    insertAtEnd(head2,1);
    insertAtEnd(head2,7);
    insertAtEnd(head2,8);
    insertAtEnd(head2,89);

    printelements(head1);
    printelements(head2);

    cout<<"merged linked list is as folllows : "<<endl;
    mergedLLHead=merge2LinkedList(head1,head2);

    printelements(mergedLLHead);

    return 0;
}