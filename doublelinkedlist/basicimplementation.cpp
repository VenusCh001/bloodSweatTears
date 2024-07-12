#include<iostream>
#include<vector>
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
        tail=newnode;
    }
    void insertAtkthposition(int k,int val){
        int count=1;
        node*temp=head;
        while(count<k-1){
            temp=temp->next;
            count++;
        }
        if(temp==tail){
            insertAttail(val);
            return;
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
    }
    bool palindrome(){
        node*temp=head;
        while(temp->next){
            temp=temp->next;
        }
        node*temp2=temp;
        temp=head;
        while(temp2->next!=temp and temp2!=temp){
            if(temp->data!=temp2->data){
                return 0;
            }
            temp=temp->next;
            temp2=temp2->prev;
        }
        return 1;
    }
    deleteNodeWithSameNeighbour(){
        node*temp=head;
        while(temp->next){
            temp=temp->next;
        }
        node*current=temp->prev;
        while(current->prev){
            if(current->next->data==current->prev->data){
                current->next->prev=current->prev;
                current->prev->next=current->next;
                node*todelete=current;
                current=current->prev;
                delete todelete;
                continue;
            }
            current=current->prev;
        }
    }
    vector<int> findDistance(){
        int countNode=1;
        vector<int> result(2,-1);
        int prevNodeCount,firstNodeCount=-1,LastNodeCount,lastCriticalNode;
        int countCriticalNode=0;
        int minDistance=INT8_MAX;
        node*temp=head;
        if(head==NULL or head->next==NULL)return result;
        temp=temp->next;
        while(temp->next){
            countNode++;
            if(temp->data < temp->prev->data and temp->data < temp->next->data){
                countCriticalNode++;
                if(firstNodeCount==-1){
                    firstNodeCount=countNode;
                    prevNodeCount=countNode;
                    continue;
                }
                lastCriticalNode=countNode;
                minDistance=min(countNode-prevNodeCount,minDistance);
                prevNodeCount=countNode;
            }
            else if(temp->data>temp->prev->data and temp->data>temp->next->data){
                countCriticalNode++;
                if(firstNodeCount==-1){
                    firstNodeCount=countNode;
                    prevNodeCount=countNode;
                    continue;
                }
                lastCriticalNode=countNode;
                minDistance=min(countNode-prevNodeCount,minDistance);
                prevNodeCount=countNode;

            }temp=temp->next;
        }
        int maxDistance=lastCriticalNode-firstNodeCount;
        result[0]=minDistance;
        result[1]=maxDistance;
        return result;    

    }
   vector<int> findSum(int target){
        node*begin=head;
        node*end=tail;
        int sum;
        while(begin->prev!=end){
            sum=begin->data+end->data;
            if(sum==target){
                return {begin->data,end->data};
            }
            else if(sum>target)end=end->prev;
            else begin=begin->next;
        }
        return {-1,-1};
    }
};
int main(){
    doubleLL LL;
    LL.insertAttail(1);
    LL.insertAttail(3);
    LL.insertAttail(6);
    LL.insertAttail(6);
    LL.insertAttail(7);
    LL.insertAttail(19);
    LL.display();
    
    vector<int>result=LL.findSum(10);
    cout<<result[0]<<" "<<result[1]<<" "<<endl;
    return 0;
}