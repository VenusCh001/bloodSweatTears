#include<iostream>
using namespace std;
//class for linkedlist node
class node{
        public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
//class for the linkedlist 
class queuef{
    public:
    node*front;
    node*back;
    int size;
    queque(){
        front=NULL;
        back=NULL;
    }

    void enqueuef(int val){//inserting into queuef
        size++;
        node*newnode=new node(val);
        if(front==NULL){
            front=newnode;
            back=newnode;
            return;
        }
        back->next=newnode;
        back=newnode;
    }
    void dequeuef(){
        if(front==NULL){
            cout<<"no element"<<endl;
            return;
        }
        else if(front->next==NULL){
            node*todelete=front;
            front=back=NULL;
            delete todelete;
        }
        else{
            node*todelete=front;
            front=front->next;
            delete todelete;
        }
    }
    int frontf(){
        if(front)return front->data;
        else return 0;
    }
    int backf(){
        if(back)return back->data;
        else return 0;
    }
    bool isfullf(int capacity){
        return (capacity>size)?1:0;
    }
};
int main(){

    queuef q;//static allocation
    q.enqueuef(20);
    q.dequeuef();
    cout<<q.frontf()<<endl;
    cout<<q.backf()<<endl;
    q.enqueuef(30);q.enqueuef(40);
    cout<<q.isfullf(4);
    return 0;
}
