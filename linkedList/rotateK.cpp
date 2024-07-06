#include<iostream>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        int listLength = 0;
        ListNode* temp = head;

        // finding the length of the linked list
        while (temp != NULL) {
            listLength++;
            temp=temp->next;
        }

        //changing the links according to the rotations
        ListNode* new_head;
        int count=0;
        int moveBySteps=k%listLength;
        while(temp->next){
            if(count==moveBySteps){
                new_head=temp->next;
                temp->next=NULL;
                temp=new_head;
            }
            count++;
            temp=temp->next;
        }
        temp->next=head;
         return new_head;

    }
};