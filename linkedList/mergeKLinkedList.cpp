#include<iostream>
#include<vector>
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
node* mergeKLinkedLists(vector<node*> &lists){
    node* mergedHead;
    while(lists.size()>1){
        mergedHead=merge2LinkedList(lists[0],lists[1]);
        lists.push_back(mergedHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return mergedHead;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    node* head3=NULL;

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

    insertAtEnd(head3,2);
    insertAtEnd(head3,5);
    insertAtEnd(head3,6);
    insertAtEnd(head3,10);

    vector<node*> lists;
    lists.push_back(head1);
    lists.push_back(head2);
    lists.push_back(head3);

    printelements(head1);
    printelements(head2);
    printelements(head3);

    cout<<"merged linked list is as folllows : "<<endl;

    mergedLLHead=mergeKLinkedLists(lists);

    printelements(mergedLLHead);

    return 0;
}