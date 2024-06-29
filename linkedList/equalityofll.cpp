#include<iostream>
#include"node.h"
using namespace std;
bool checkEquality(node* head1,node* head2){
    node*ptr1=head1;
    node*ptr2=head2;
    while(ptr1!=NULL and ptr2!=NULL){
        if(ptr1->data!=ptr2->data){
            return 0;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        if(ptr1==NULL ^ ptr2==NULL) return 0;
    }
    return 1;
}
int main(){
    node *head1=NULL;
    node *head2=NULL;
    insertAtEnd(head1,1);    insertAtEnd(head1,2);    insertAtEnd(head1,3);    insertAtEnd(head1,4);
    insertAtEnd(head2,1);    insertAtEnd(head2,2);    insertAtEnd(head2,3);    insertAtEnd(head2,4);    insertAtEnd(head2,5);
    printelements(head1);
    printelements(head2);
    

    cout<<"linked list are "<<checkEquality(head1,head2);

    return 0;
}